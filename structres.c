#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[20];
}s1;
void main(){
    struct student s1,s2;
    s1.roll_no=10;
    s2.roll_no=20;
    strcpy(s1.name,"ARUN");
    strcpy(s2.name,"YERRAM");
    printf("%s ",s1.name);
    printf("\n%s",s2.name);

}               