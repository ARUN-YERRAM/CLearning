#include<stdio.h>
    struct student{
        int roll_no;
        float marks;
        char name[20];
        char branch[20];
    };
    void main()
    {
        struct student s={1,65.5,"keshav","Data Science"};
        struct student *p;
        p=&s;
        printf("%d",*(p));
    }