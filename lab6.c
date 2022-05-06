/*LabProgram_06_Searching Algorithms (Linear Search, Binary Search) */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
 
 //linear search
 void linear_search(int a[],int n,int ele)
 {
      printf("Linear Search Implemenation");
      printf("\n************************************");

  int i;
  int c=0;
  for(i=0;i<n;i++){
 
  if (a[i]==ele){
  printf("\n%d is found at location %d",ele,i+1);
  c++;
}
}
if(c==0){
printf("\n%d is not present",ele);

}
else
{
printf("\n%d is presnet %d times in a",ele,c);
}
 }
 

//binary search
int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element){
          printf("\nBinary Search Implemenation");
          printf("\n************************************");
          printf("\n%d found at location %d.\n", element, middle+1);
      break;
      }
         
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   
}


void search(int array[],int hFn,int n){
int element,pos,i=0;
 
//printf("Enter element you want to search\n");
//scanf("%d",&element);
 
pos = element%hFn;
 
while(i++ != n){
if(array[pos]==element){
printf("Element found at index %d\n",pos);
break;
}
else
            if(array[pos]==INT_MAX ||array[pos]!=INT_MIN)
                pos = (pos+1) %hFn;
}
if(--i==n) 
  printf("Index\tValue\n");
else
 printf("\nElement not found");

 
for(i=0;i<n;i++)
        printf("%d\t%d\n",i,array[i]);



}

 

 int main()
 {
 
  int n,i,ele,result,hFn;
  int a [n];
int input;
 
 
 
  printf("\nEnter the size of an array: ");
  scanf("\n%d",&n);
  printf("\nEnter elements into the array: ");
  for(i=0;i<n;i++){
 
  scanf("\n%d",&a[i]);
}
printf("\nEnter the search element: ");
scanf("\n%d",&ele);
printf("\n1.Linear search\n2.Binary search\nEnter the option: ");
scanf("%d",&input);

if (input==1)
{ linear_search (a,n,ele);
   
}
else if(input==2)
{
   iterativeBinarySearch(a, 0, n-1, ele);
   
}
else if(input==3){

printf("Enter hash function\n");
scanf("%d",&hFn);
search(a,hFn,n);

}

else
{
   printf("Invalid option");
   
}
  return 0;
 }

