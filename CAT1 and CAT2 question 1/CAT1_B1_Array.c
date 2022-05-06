#include<stdio.h>
#include<stdlib.h>

// structure definition
struct voter_list
{
	int age;
	int gender;		
	int areacode;			
	
};

// function prototype
struct voter_list * create_voter(int);
struct voter_list* get_voter(struct voter_list*,int);

// main method
void main()								
{
	struct voter_list * voter;
	int size;
	char gender;
	printf("Enter the number of voters: ");
	scanf("%d",&size);
	voter=create_voter(size);
	voter=get_voter(voter,size);	
}

// function definition
struct voter_list * create_voter(int size)						
{
	struct voter_list * voter;
	voter=malloc(size*sizeof(struct voter_list));// dynamic memory allocation;
	return voter;
}


struct voter_list * get_voter(struct voter_list * voter,int size)
{
	int i=0,age=0;
	printf("Enter the details \n");
	for(i=0;i<size;i++)
	{
		printf("\n-----------This is for the  %d voter--------\n\n",i+1);
		printf("Enter the age \n",i+1);
		scanf("%d",&age);
		if(age<18)								
		{
			printf("Age can't be less than 18\n");
			(voter+i)->age=0;
		}
		else
		{
			(voter+i)->age=age;
			
		}
		printf("Enter the gender *1 for Male* and *0 for Female* \n",i+1);
		scanf("%d",&(voter+i)->gender);
		printf("Enter the areacode \n",i+1);
		scanf("%d",&(voter+i)->areacode);
	}

		for(i=0;i<size;i++)
	{
		printf("--------------Printing the details of the voters------------\n\n",i+1);
		printf("Age : ");
		printf("%d\n",(voter+i)->age);
		printf("Gender : ");
		printf("%d\n",(voter+i)->gender);
		printf("Areacode : ");
		printf("%d\n",(voter+i)->areacode);
		
	}
}
