#include<stdio.h>
struct students{
    char name[20];
    int rollno;
    float marks;
};
int main (){
    struct students s1={"jeeva",251801115,192};
    
        
    printf("%s %d %.2f",s1.name,s1.rollno,s1.marks);
    
}