#include<stdio.h>
#include"extern.c"
extern int var;
void main(){
    extern int var;
    printf("%d",var);
    display();
}
void display();{
    printf("%d",var);
}
