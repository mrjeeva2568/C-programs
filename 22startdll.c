
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
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    struct node *ptr=temp;
    
    printf("forwarddoublelinkedlist:");
    ptr=temp;
    while(ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->prev;
    }printf("NULL");
}
        