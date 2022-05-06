
//insertion sort
#include <stdio.h>  

//function to display array
void display_array(int a[],int n)

{
int i ;
for(i=0;i<n;i++){
    printf("\n%d",a[i]);
}
}

//function to sort array using Insertion_sort methodology

void InsertionSort(int a[],int n){
    int i ,j,t,swap=0;
  
    for(i=1;i<n;i++){
        t=a[i];
        j=i-1;

        while(j>=0&&t<=a[j]){
        	++swap;
            a[j+1]=a[j];
            j=j-1;

        }
        a[j+1]=t;
         
    	printf("\nno of shift is %d",swap);
	}
	
    
  
    
}

//////////////////////////////////////////////
//function to sort array using Quick Sort
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}
int main(){

int n,i;
int a[n];
printf("\nEnter the size of array: ");
scanf("\n%d",&n);
printf("\nEnter random elements in an array: ");
for(i=0;i<n;i++){
    scanf("\n%d",&a[i]);
}printf("\nArray before sorting");
display_array(a,n);

printf("\nArray elemenets after performing Insertion Sort");
InsertionSort(a,n);
display_array(a,n);

printf("\nArray elemenets after performing Quick Sort");
quicksort(a,0,n-1);
display_array(a,n);

return 0;

}