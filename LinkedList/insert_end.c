#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;

    };

    struct node *head,*newnode,*temp;
    int choice=1;
    head=NULL;
    

    while (choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data ");
        scanf("%d", &newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;
        }

        else{
            temp->next=newnode;
            temp=newnode;

        }

        printf("Enter 1 to continue and 0 to stop ");
        scanf("%d",&choice);

    }temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    // inserting node at end
    newnode=(struct node*)(malloc(sizeof(struct node)));
    printf("Enter the value u want to enter in the end ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }

    temp->next=newnode;


    //printing after inserting
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    
    return 0;
}