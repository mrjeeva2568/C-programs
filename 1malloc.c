#include<stdio.h>
#include<stdlib.h>
int main (){
    int *arr;
    int n=5;
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocation is failed");
        return 1;
    }
    for (int i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }

}