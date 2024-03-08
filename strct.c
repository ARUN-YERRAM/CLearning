#include<stdio.h>
#include<string.h>
struct student{
    int a;
    char name[20];
};

int main(){
   // struct student s1;
    //scanf("%d %d\n",&s1.a,&s2.a);
    //strcpy(s1.name,"ARUN");
    //strcpy(s2.name,"YERRAM");
    struct student s1={10,20};
    struct student s2=s1;
    //printf("%s %s\n",s1.name,s2.name);
    //printf("%d %d",s1.a,s2.a);
    printf("%d",s2);
}