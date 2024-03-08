#include<stdio.h>
unsigned int mystrlen(const char *str){
  unsigned int count=0;
  while((*str)!='\0'){
    count++;
    str++;
  }
  return count;
}
  int main(){
     int i;
     char *p="ARUN YERRAM";
     i=mystrlen(p);
     printf("The Length of %s is %d",p,i);
     return 0;
  }

