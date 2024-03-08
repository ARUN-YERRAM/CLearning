#include<stdio.h>
int main(){

    struct student{
        int data;
        char name[20];
        float pin; 
    }s1;

    s1.data=100;
    strcpy(s1.name,"ARUN");
    s1.pin=23.4;

    printf("%d %s %.1f",s1.data,s1.name,s1.pin);

}