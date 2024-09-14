
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node * create(){

    int x;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter the data you want to enter for the node else enter -1 for no node \n");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }

    newnode->data=x;

    printf("Enter the left child of %d \n",x);
    newnode->left=create();

    printf("Enter the right child of %d \n",x);
    newnode->right=create();

    return newnode;
    



}

void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    
    inorder(root->right);

}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);

}

int main(){
    struct node * root;
    root=NULL;
    root=create();
    preorder(root);
    inorder(root);
    postorder(root);
    return 0;

}