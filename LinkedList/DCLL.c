#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *prev;
        struct node *next;

    };

    struct node *head,*newnode,*tail,*temp;
    int choice=1;
    head=NULL;
    

    while (choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value u want to enter \n");
        scanf("%d",&newnode->data);

        if(head==NULL){
            head=newnode;
            tail=newnode;
            head->prev=head;
            head->next=head;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;

        }
        printf("Enter 1 to continue and 0 to stop ");
        scanf("%d",&choice);

    }

    temp=head;
    if(head==NULL){
        printf("The list is empty \n");

    }
    else{
        while(temp!=tail){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }

    return 0;
}