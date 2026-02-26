#include <stdio.h>

struct student {
    char name[20];
    int marks;
};
 void updateMarks(struct student *s)
{
    s->marks = 95;   
    printf("Inside function (Call by refernce): %d\n", s->marks); //80
}

int main()
{
    struct student st = {"Aman", 80};

    printf("Before function call: %d\n", st.marks); //95
    

    updateMarks(&st);

    printf("After function call: %d\n", st.marks); //80

    return 0;
}