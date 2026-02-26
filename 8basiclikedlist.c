#include<stdio.h>
struct node{
    int data;
    struct node *ptr;
};
int main () {
struct node n1,n2;
n1.data=10;
n1.ptr=&n2;
n2.data=20;
n2.ptr=NULL;
struct node*temp=&n1;
while(temp!=NULL){
    printf("%d ->",temp->data);
    temp=temp->ptr;
}printf("NULL");
}