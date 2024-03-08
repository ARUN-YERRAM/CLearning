#include<stdio.h>
#include<string.h>
struct student{      //GLOBAL DECLARATION//  //STRUCTURE TEMPLATE//
    int RollNo;
    char Name[20];
}s1,s2;

    int main(){
    struct student s1,s2;
    s1.RollNo=10;
    s2.RollNo=20;
    printf("%d",s1.RollNo);
}