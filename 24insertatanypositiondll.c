#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main (){
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n,val;
    printf("enter the no.of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("ENTER THE VALUE:");
        scanf("%d",&val);
        newnode->data=val;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
    int m;
    printf("enter the postion to insert:");
    scanf("%d",&m);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("enter the value to insert:");
    scanf("%d",&newnode->data);
    
    if(m==1){
     newnode->next=head;
     head->prev=newnode;
     head=newnode;
    }
    else{
    temp=head;
    for (int i=1;i<m-1;i++){
        temp=temp->next;
    }
    struct node *d=temp->next;
    newnode->next=d;
    temp->next=newnode;
    newnode->prev=temp;
    d->prev=newnode;
}temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
    struct node *ptr;
    ptr=temp;
    while(ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->prev;
    }printf("NULL");
}