/* Program to create an array of size N and perform the following operations
a. Replace all duplicate values with zero
b. Delete all duplicate values
c. Try to implement (a) and (b) with dynamic memory allocation */

/* header files */
#include<stdio.h>

/* main function */
int main()
{
   int a[50],i, count = 0, number;
   
   /* to read array size from keyboard */ 
   printf("Enter size of the array\n");
   scanf("%d",&number);
   
   /* to read array elemenets from keyboard */ 
   printf("\nEnter Elements of the array:\n");
   for(i=0;i<number;i++){
      scanf("%d",&a[i]);
   }
   
   /* to display array elemennts on monitor */
   printf("\nArray elements are: \n");
   for(i=0;i<number;i++){
      printf("%d ",a[i]);
   } 
   
   printf("\nArray elements after replacement: \n");  
   
   return 0;
}
