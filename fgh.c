/* Write a C program To insert a sub-string in to a given main string
from a given position. */
#include<stdio.h>
#include<string.h>
int main(){
      char str1[20],str2[20];
      int l1,l2,i,n,index;
      printf("Enter string 1:");
      gets(str1);
      l1=strlen(str1);
      printf("Enter string 2:");
      gets(str2);
      l2=strlen(str2);
      printf("Enter the position to insert string:");
      scanf("%d",&n);

      index=n-1;

      for(i=l1-1;i>=index;i--){
            str1[i+l2]=str1[i];
      }
      for(i=0;i<l2;i++){
         str1[index]=str2[i];
         index++;
      }
      printf("The New string is:%s",str1);
      return 0;
}