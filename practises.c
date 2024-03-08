#include<stdio.h>
/*int a,b=0;
void prtfun(void);
int main(){
    static int a=1;
    prtfun();
    a+=1;
    prtfun();
    printf("%d%d\n",a,b);
}
void prtfun(void){
    register int a=2;
    int b=1;
    a+=++b;
    printf("%d %d\n",a,b);
              }
              */
           /*  int i=5;
              int main(){
                  static int i;
                  printf("%d\n",i);  
              {
                int i=10;
                printf("%d\n",i);
              }
              }*/
/*int main(){
    register int d=10;
    int *p=NULL;
    p=&d;
    *p=5;
    printf("%d",*p);
}

*/
/*#include<stdio.h>
#define MUL(a,b) a*b
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",MUL(x,y));
    return 0;
}*/

#define LINE 5
void main(){
    #ifdef LINE
    printf("LINE 1");
    #else
    printf("LINE 2");
    #endif
}

