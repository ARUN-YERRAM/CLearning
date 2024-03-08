#include<stdio.h>
unsigned int mystrlen(const char *str){   //strlen length function  code//
  unsigned int count=0;
  while((*str)!='\0'){
    count++;
    str++;
  }
  return count;
}
  int main(void){
     int i;
     char *p="ARUN YERRAM";
     i=mystrlen(p);
     printf("The Length of %s is %d",p,i);
     return 0;
  }
  

  // char *name={"YERRAM ARUN"};
   //name=name+7;
   //printf("%s\n",name);
   //printf("ARUN"+0);

   //char *ptr="Arun";
   //ptr="Yerram";
   //printf("%s",(ptr+2));

   //char ptr[]={"ARUN"};
   //printf("%s",ptr+0);

   
   //char a[]="ARUN";
   //printf("%c ",("HELLO"+1));
  // printf("%c",a[2]);

  //char name[3][8]={"ARUN","VARUN","TARUN"};
  //printf("%c",*(name[0]));
