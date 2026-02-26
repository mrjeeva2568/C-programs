#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main (){
    struct node *head=NULL,*newnode=NULL,*temp=NULL;
    int n;
    printf("enter the No. of nodes:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the value:");
        scanf("%d",&newnode->data);
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
    int pos;
    printf("enter the position to delete:");
    scanf("%d",&pos);
    if(pos>n){
        printf("out of range");
        return 0;
    }
    if(head==NULL){
        printf("List is empty");
        return 0;
    }else if(pos==1){
        temp=head;
       head=temp->next;
       if(head==NULL){
        printf("list is empty");
        return 0;
       }else{
        head->prev=NULL;
        free(temp);
       }
       
    }else{
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    struct node*p=temp->next;
    temp->next=p->next;
    p->prev=temp;
    free(p);
}
temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
    struct node *ptr=temp;
    printf("doublelinkedlist:");
    while(ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->prev;
    }printf("NULL");
}