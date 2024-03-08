#include<stdio.h>
int arr(int[],int);
void main(){
    int average;
    int marks[5]={35,38,42,44,48};
    int size=sizeof(marks)/sizeof(marks[0]);
    average=arr(marks,size);
    printf("%d",average);
    printf("%d",sizeof(marks));
}
int arr(int marks[],int size){
    int i,sum=0,avg;
    for(i=0;i<size;i++){
        sum=sum+marks[i];
        avg=sum/size;
        return avg;
    }
}