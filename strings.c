#include<stdio.h>
#include<string.h>
#include<unistd.h>
void display(char[],char[]);
int main(){
    char str1[]="Keshav Memorial";
    char str2[]="Institute of technology";
    display(str1,str2);
}
void display(char str1[],char str2[])
{
int i,length;
strcat(str2,str1);
printf("%s\n",str2);
sleep(2);
printf("%s ",str2);


for(i=0;str1[i]!='\0';i++){
    length=length+1;}
printf("length=%d",length);
     }
