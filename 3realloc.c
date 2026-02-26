#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    int n=5;
    int m=0;
    ptr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        ptr[i]=i+1;
        printf("%d ",ptr[i]);
    }
    printf("\n\n");
    int *temp=(int*)realloc(ptr,m*sizeof(int));
    if(temp==NULL){
        printf("memory reallocation is failed");
    }else{
        ptr=temp;
        for (int i=0;i<m;i++){
           
           printf("%d ",ptr[i]);
        }
    }
}