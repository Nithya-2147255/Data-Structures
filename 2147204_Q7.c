#include<stdio.h>
#define max 10
struct mca
{
	int reg_no;
	char name[10];
	int performance_score;
};

struct mca obj[max];

void get_data(int size);
void print_data(int size);

void main()
{
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	get_data(size);
	print_data(size);
}
		
void get_data(int size)
{
	int reg_no;
	struct mca * ptr;
	int i;
	for(i=0;i<size;i++)
	{
					
				printf("Enter the register no ");
				scanf("%d",&(obj[i].reg_no));
				printf("Enter name\n");
				scanf("%s",&(obj[i].name));
				printf("Enter the performance score\n");
				scanf("%d",&(obj[i].performance_score));;
		
			
		
	}	
	

}

void print_data(int size)
{

	int i;
	printf("-------Printing Details--------\n");
	printf("Reg_No \tName\tPerformance_score\n");
	for(i=0;i<size;i++)
	{
		
			printf("%d\t",obj[i].reg_no);
			printf("%s\t",obj[i].name);
			printf("%d\n",obj[i].performance_score);	
		

		
	}	
}
