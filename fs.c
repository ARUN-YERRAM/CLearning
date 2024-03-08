// #include<stdio.h>
// int main(){
    
// }
// #include<stdio.h>
// int main(){

//     // Program 1:


//    //int num,rows,i,j;
//      // int count=0;
//     //printf("Enter num and rows u want to print multiplication table of:");
//     //scanf("%d %d",&n,&rows);

//     //for(i=1;i<=rows;i++){
//       //  printf("%d*%d=%d\n",n,i,n*i);
//           //              }
//     //return 0;

//    // Program2:

//    // printf("n:");
//     //scanf("%d",&n);
//   //  for(i=1;i<=n;i++){
//     //    for(j=1;j<=n;j++){
//       //      printf("%d",i==j);

//         //}
//        // printf("\n");
//    // }

//     //Program 3:
//    /* int count,num;

//    printf("Enter Number num:");
//    scanf("%d",&num);

//    for(int i=1;i<=num;i++){
//        if(num%i==0){
//          count++;}
//    }
//    if(count>2){
//     printf("Not Prime Number");
//   }
//    else{
//     printf("Prime Number");
//    }
// }
// */
//     //Program 4:To print Palindrome series

//   // int n,i,last,rev,sum;

//   // printf("Enter Number n:");
//  //  scanf("%d",&n);
//   // sum=0;
//   // rev=0;
//   // i=n;

//   // while(n!=0){
//     //    last=n%10;
//       //  rev=rev*10+last;
//      //   sum=sum+last;
//       //  n=n/10;
//  //  }
//  ///  printf("%d\n",sum);
//   // if(rev==i){
//    // printf("%d is Palindrome Number",i);
//   // }
//    //else{
//    // printf("%d is not Palindrome Number",i);
//    //}
//    //return 0;

//    //Program 5:To print Fibonacci series


//    int a=0,b=1,n,i,c;
//    printf("Enter n:");
//    scanf("%d",&n);

//    for(i=1;i<=n;i++){
//       printf("%d ",a);
//         c=a+b;
//         a=b;
//         b=c;
      
//       }
// }
//        // Program 5:To print Prime Numbers in Range:

//        /* int n,i,count,j;
//         /count=0;

//         printf("Enter Number n:");
//         scanf("%d",&n);

//         for(i=1;i<=n;i++){
//             for(j=2;j<=i/2;j++){
//                if(n%i==0){
//                 count++;
//                 break;
//             }
//       }
//         }
//         if(count==0 && i!=1){
//             printf("%d ",i);
//         }  */
    
//       //  Program  6:

//        // int i,j,rows;
//       //  printf("Enter number rows:");
//       //  scanf("%d",&rows);

//         //for(i=1;i<=rows;i++){
//          //   for(j=1;j<=i;j++){
//           //      printf("%d ",j);
//           //  }
//           //  printf("\n");
//        // }

//       /* int i,j,k,rows;
//        printf("Enter number rows:");
//        scanf("%d",&rows);
//        k=1;

//        for(i=1;i<=rows;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",k);
//             k++;
//         }
//         printf("\n");
//     }
//         int i,j,n;
//         printf("Enter number n:");
//         scanf("%d",&n);
//   for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",i);
//       }
//         printf("\n");
//     } 
  
  
// }
// */




// #include <stdio.h>
// int main() {
//     int rows, columns, i, j;
//     int matrix[10][10], transpose[10][10];

//     printf("Enter the number of rows and columns of the matrix: ");
//     scanf("%d %d", &rows, &columns);

//     printf("Enter the elements of the matrix: \n");
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < columns; j++) {
//             printf("matrix[%d][%d]=",i,j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("Original Matrix:\n");
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < columns; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     printf("Transpose of the matrix: \n");
//     for(i = 0; i < columns; i++) {
//         for(j = 0; j < rows; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int rows, columns, i, j;
//     int matrix[10][10], transpose[10][10];

//     // Input number of rows and columns for the matrix
//     printf("Enter the number of rows and columns of the matrix:");
//     scanf("%d %d", &rows, &columns);

//     // Input elements of the matrix
//     printf("Enter the elements of the matrix: \n");
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < columns; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Calculate the transpose of the matrix
//     for(i = 0; i < rows; i++) {
//         for(j = 0; j < columns; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     // Display the transpose of the matrix
//     printf("Transpose of the matrix: \n");
//     for(i = 0; i < columns; i++) {
//         for(j = 0; j < rows; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter number:");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++){
//         for(j=1;j<=5;j++){
//             printf("*");
//         }
//         printf("\n");
//      }
//   }
