#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *prev;
        struct node *next;

    };

    struct node *head,*newnode,*temp;
    int choice=1;
    head=NULL;
    

    while (choice){

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value u want to enter \n");
        scanf("%d",&newnode->data);

        newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;

        }

        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }

        

        printf("Enter 1 to continue and 0 to stop ");
        scanf("%d",&choice);

    }
    //before reversing

    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    //reversing DLL

    struct node* current, *nextnode, *tail, *temp1;
    current=head;
    
    while(current!=NULL){

        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;         //reversing the links of the DLL

        
        current=nextnode;
    }

    current=head;
    head=tail;
    tail=current;

    //printing after reversal 
    temp1=head;
    while(temp1!=NULL){
        printf("%d\t",temp1->data);
        temp1=temp->next;
    }




    return 0;
}