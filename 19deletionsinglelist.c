#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main (){
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n,val;
    printf("No.of nodes:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the value:\n");
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
    }if(head==NULL){
        printf("linkedlist is empty");
    }else{
        temp=head;
    head=head->next;
free(temp);
}
    struct node *ptr;
    ptr=head;
    printf("linkedlist:");
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }printf("NULL");
}