#include<stdio.h>
struct node{
    int i;
    char c;
    struct node *ptr;
};
int main (){
    struct node var1,var2;
    var1.i=65;
    var1.c='A';
    var1.ptr=&var2;
   struct node *temp=&var1;
    var2.i=66;
    var2.c='B';
    var2.ptr=NULL;
   
    printf("%d %c",temp->i,var1.ptr->c);

}