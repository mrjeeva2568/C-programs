#include<stdio.h>
#include<stdlib.h>
int main (){
    int *ptr;
    int n=5;
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("memory allocation is failed");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,ptr[i]);
    }
}