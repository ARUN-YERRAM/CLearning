/*To Check whether Given no is Prime no or not*/ 
#include<stdio.h>
int main(){
    int n,i,count;
    printf("Enter number:");
    scanf("%d",&n);
    if(n!=1){
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        printf("%d is not Prime no",n);}
    else{
        printf("%d is Prime no",n);
    }    
}

    else{
        printf("Neither Prime nor composite");
    }
    return 0;
    }





       
    
    

