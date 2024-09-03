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

    }
    
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");

    // reversing LL
    struct node* prevnode,*currnode,*nextnode;
    prevnode=NULL;
    currnode=head;
    nextnode=head;

    while(nextnode!=0){
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;

    }

    head=prevnode;
    
    //printing after reversing
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
    return 0;
}