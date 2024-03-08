#include<stdio.h>
int main(){
    printf("Enter Marks Of Every Subject:\n");

    int a,b,c,d,totalmarks;
    float e;
    
    scanf("%d%d%d%d",&a,&b,&c,&d);

    totalmarks= a+b+c+d;
    e=(totalmarks*100)/400;
    
    if(e<40)
    {
            printf("FAIL\n");
        }
    else if(e>40 && e<60)
    {
        printf("SECOND CLASS\n");
        }
    else if(e<70 && e>60) 
    {
        printf("FIRST CLASS\n");
        }
    else
    {
        printf("FIRSTCLASS WITH DISTINCTION\n");
        }    
        return 0;


        }       




