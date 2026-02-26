#include<stdio.h>
#define MAX 5
int top=-1;
int stack[MAX];
void push(int n){
    if(top==MAX-1){
        printf("stack is overflowing\n");
    }else{
        top++;
        stack[top]=n;
        printf("Pushed element is:%d",n);

    }
}
void display(){
    if(top==-1){
        printf("stack is empty");
    }else{
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}
int main (){
    int n,m;
    printf("enter how many element to push:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     printf("\nenter the element:");
     scanf("%d",&m);
     push(m);
    }
    display();

}
