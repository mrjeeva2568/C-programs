#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud{
    int roll;
    char name[30];
    int age;
    struct stud *next;
};
int main (){
struct stud *head,*n1,*n2,*n3;
n1=(struct stud *)malloc(sizeof(struct stud));
n2=(struct stud *)malloc(sizeof(struct stud));
n3=(struct stud *)malloc(sizeof(struct stud));
     n1->roll=1;strcpy(n1->name,"jeeva");n1->age=18;
     n2->roll=2;strcpy(n2->name,"sai");n2->age=18;
     n3->roll=3;strcpy(n3->name,"roshan");n3->age=17;
     head=n1;
     n1->next=n2;
     n2->next=n3;
     n3->next=NULL;
     struct stud *temp=head;
     while(temp!=NULL){
        printf("roll:%d->Name:%s->age:%d\n",temp->roll,temp->name,temp->age);
        temp=temp->next;
     }
     printf("NULL");
}