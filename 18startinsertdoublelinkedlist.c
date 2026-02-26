#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *pre;
};
int main (){
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n,val;
    printf("No.of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the value:\n");
        scanf("%d",&val);
        newnode->data=val;
        newnode->next=NULL;
        newnode->pre=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }else{
            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
    }
    int m;
    printf("how many number to insert at first:");
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the value:");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head->pre=newnode;
        newnode->pre=NULL;
        head=newnode;
    }

    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->next;
    }printf("NULL");
    
}