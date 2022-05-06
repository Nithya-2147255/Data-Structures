#include<stdio.h>
#define max 10
struct node 
{
	int age;
	char gender;			// Structure definition
	int areacode;			
	
};
struct node arr[max];

void get_data(int size);
void put_data(int size);

void main()
{
	int i;
	int size;
	printf("Enter the size of the list\n");
	scanf("%d",&size);
	get_data(size);
	put_data(size);
}

void get_data(int size)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		printf("Enter the age\n");
		scanf("%d",&arr[i].age);
		printf("Enter the gender\n");
		fflush( stdin );
		scanf("%c",&arr[i].gender);
		printf("Enter the areacode\n");
		scanf("%d",&arr[i].areacode);

		
	}

}

void put_data(int size)
{
	int i;
	printf("----------Printing detailse--------\n\n");
	printf("Age\tGender\tAreacode\n");
	for(i=0;i<size;i++)
	{
		
		printf(" %d\t",arr[i].age);
		printf(" %c\t",arr[i].gender);
		printf(" %d\n",arr[i].areacode);
				
	}
}
