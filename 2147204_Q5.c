#include<stdio.h>
#define max 10
struct node 
{
	int coeff;
	int digree;			// Structure definition		
	
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
		
		printf("Enter the digree\n");
		fflush( stdin );
		scanf("%d",&arr[i].digree);
		printf("Enter the coefficient\n");
		scanf("%d",&arr[i].coeff);
		
	}

}

void put_data(int size)
{
	int i;
	printf("----------Printing Details-------\n");
	printf("Digree\tCoefficient\n");
	for(i=0;i<size;i++)
	{
		printf(" %d\t",arr[i].digree);
		printf(" %d\n",arr[i].coeff);

		
	}
}
