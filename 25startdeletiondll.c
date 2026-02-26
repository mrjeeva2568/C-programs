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
    };
    if(head==NULL){
        printf("List is empty");
        return 0;

    }else if(head->next==NULL){
        free(head);
        head=NULL;
        

        printf("List is empty");
        return 0;
    }else{
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->next;
    }printf("NULL");
}