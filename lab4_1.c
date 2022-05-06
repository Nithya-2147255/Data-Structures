/*Lab Program 4: LabProgram_04_Sorting*/
#include<stdlib.h>
#include<stdio.h>

void quicksort(int number[25],int first,int last);
void display_array(int a[],int n);
void selection_sort();
void InsertionSort(int a[],int n);

int x[50];
int n,i;
int main()     
{
        int choice;
        int a[100];

        
        while(1)
		{
                printf("\n1.Selection sort\n");
                printf("\n2.Insertion sort\n");
                printf("\n3.Quick sort\n");
                printf("\n10.Exit\n");
                printf("\nEnter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                        			printf("\nUsing Selection Sort\n");
									printf("Enter the no of elements:\n");
									scanf("%d",&n);
									printf("The unsorted list is:\n");
									for(i=0;i < n;i++)
									{
										x[i]=rand();
										printf("%d ", x[i]);
									}
									selection_sort(x,n);
									printf("\nThe sorted list is\n");
									for(i=0;i < n;i++)
									{
										printf("%d ",x[i]);
									}
										
                                        selection_sort();
                                        break;
                                        
                        case 2: 	printf("\nUsing Insertion Sort\n");
									printf("Enter the no of elements:\n");
									scanf("%d",&n);
									printf("The unsorted list is:\n");
									for(i=0;i < n;i++)
									{
										a[i]=rand();
										printf("%d ", a[i]);
									}
									printf("\nArray elemenets after performing Insertion Sort");
									InsertionSort(a,n);
									display_array(a,n);
									break;
						
						case 3: 	printf("\nUsing Quick Sort\n");
									printf("Enter the no of elements:\n");
									scanf("%d",&n);
									printf("The unsorted list is:\n");
									for(i=0;i < n;i++)
									{
										a[i]=rand();
										printf("%d ", a[i]);
									}
									quicksort(a,0,n-1);
									display_array(a,n);	
                        
                        case 10:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
void selection_sort(int x[],int n)
{
	int index,max,j,i,count=0;
	for(i=n-1;i > 0;i--)
	{
		max=x[0];
		count++;
		index=0;
		count++;
		for(j=1;j <= i;j++)
		{
			if(x[j] > max)
			{
				max=x[j];
				count++;
				index=j;
				count++;
			}   
			count++;    
		}
		x[index]=x[i];
		count++;
		x[i]=max;
		count++;
	}
}

void display_array(int a[],int n)

{
	int i ;
	for(i=0;i<n;i++)
	{
	    printf("\n%d",a[i]);
	}
}

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
  
