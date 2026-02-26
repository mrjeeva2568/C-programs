
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main (){
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n,val;
    printf("no.of nodes:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("Enter the value:\n");
       scanf("%d",&val);
       newnode->data=val;
       newnode->next=NULL;
       if(head==NULL){
        head=newnode;
        temp=newnode;
       }else{
        temp->next=newnode;
        temp=newnode;
       }
    }int pos;
    
    pos=(n+1)/2;
    int value;
    temp=head;
    for (int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    printf("enter the value to insert:");
    scanf("%d",&value);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=temp->next;
    temp->next=newnode;
   
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }printf("NULL\n");
   
}