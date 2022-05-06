#include<stdio.h>
#define max 10
struct node 
{
	int index;
	char data;			// Structure definition		
	
};
struct node arr[max];

void get_data(int size);
void put_data(int size);

void main()
{
	int i;
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	get_data(size);
	put_data(size);
}

void get_data(int size)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		printf("Enter the index\n");
		scanf("%d",&arr[i].index);
		printf("Enter the data\n");
		fflush( stdin );
		scanf("%c",&arr[i].data);
		
	}

}

void put_data(int size)
{
	int i;
	printf("---------Printing Details-------\n\n");
	printf("Index\tData\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i].index);
		printf("%c\n",arr[i].data);
		
	}
}
