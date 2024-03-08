#include<stdio.h>
int main(){
    int a[2][3]={{10,20},
                 {30,40},
                 {50,60}};
     int b=12;
    printf("%d\n",a);
    printf("%d\n",a[1]);
    printf("%d\n",1[a]);
    printf("%d\n",*(a+1));
    printf("%d",*(2+a));
    printf("\n%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",a+1);
    printf("%d\n",&a+1);
    printf("%d\n",*(a+1));
    printf("%d",*(a+10));
    return 0;
}