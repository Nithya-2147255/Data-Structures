#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

////////////// fill array with -1 ////////////////////////////////
void initarray(int arr[],int size)
{
	int i,randno;
	//srand(time(0));
	for(i=0;i<size;i++)
	{
		arr[i] = -1;
		//arr[i] = rand()%100+1;
	}
	
}

/////////////////// Display function ////////////////////////////
void display(int arr[], int size)
{
	int i;
	
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
		if((i+1)%10==0)
		printf("\n");
	}
}

/////////////////// hash function ///////////////////////////
int hashfun(int key,int size)
{
	int hashval;
	hashval = (key )%size;
	//printf("\nhash val is %d\t",hashval);
	return hashval;
}


/////////////////// hashsearch  //////////////////////////////
void hashsearch(int arr[], int size, int ele)
{	
	int hashval;
	int k =0;
	
	hashval = hashfun(ele, size);
	
	if(arr[hashval]==-1)
	{
		printf("\nElement not Found");
	}
	else if(arr[hashval]==ele)
	{
 printf("\nElement %d found at %d position",ele, hashval);
	}
	else if(arr[hashval]!=ele)
	{
		while(k<size)
		{
	        k++;
			hashval = (ele+k)%size;
			
			if(arr[hashval]==ele)
			{
				printf("\nElement %d found at %d position",ele, hashval);
				return;
			}

		}
		printf("\n Element not found");
	}
	
}


/////////////////// insert element function //////////////////
int insert(int arr[], int size, int ele)
{
	int k = 0,hashval;
	hashval = hashfun(ele, size);
	
	while(k<size)
	{
		
		if(arr[hashval]==-1)
		{
			arr[hashval]=ele;
			printf("\nhasval is %d",hashval);
			display(arr,size);
			return hashval;
		}
		else
		{
			k++;
			hashval = (ele+k)%size;
		}
	}
	
	printf("\nArray is filled!! cant insert the element");
	return -1;
}

/////////////////// main function ///////////////////////////
void main()
{
	int array[SIZE];
	int size, i, searchele, fillcount, pos,colcount;
	srand(time(0));
	
	while(1)
	{
		
		printf("Enter the size of the array:");
		scanf("%d",&size);
		
		if(size<1)
		{
			printf("\nInvalid Size! please enter it again!\n");
		}
		else
		{
			break;
		}
	}
	
	initarray(array,size);
	printf("Array before  hashing - - - - - - - - - - - - ");
	display(array,size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element to add:");
		scanf("%d",&searchele);
		insert(array,size,searchele);
	}
	
	printf("\n------------After insertion th array elements are:");
	display(array,size);
	printf("\nEnter the element to search using hashing:");
	scanf("%d",&searchele);
	
	hashsearch(array, size, searchele);
}
















