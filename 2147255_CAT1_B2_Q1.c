#include<stdio.h>
#include<stdlib.h>
#define N 3

void creation();
void display();
int n;
struct voters
{
	int age;
	char gender[10];
	int areacode;
	
}s[N];

main()
{
	int choice;
	while(1)
	{
		printf("\n1. Record details of voters\n");
		printf("\n2. Display voters details\n");
		printf("\n3. Exit\n");
		printf("\nEnter your choice of interest\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: creation();
					break;
					
			case 2: display();
					break;

			case 3: printf("\nThank You");
					exit(0);
					
			default: printf("\nInvalid choice!Kindly enter within the options(1-3)\n");
			
		}
	}
	
	
}

void creation()
{
	int i,count=1;
	printf("\nEnter the number of records you want to store: ");
	scanf("%d",&n);
	if(n<=0 && n>N)
	{
		printf("\nInvalid size please enter within the range 1 - 5");

	}
	else
	{
		for(i=0;i<N;i++)
		{
			printf("\nEnter %dst voter detail:",count);
			fflush(stdin);
			printf("\nEnter voter's age:");
			scanf("%d",&s[i].age);
			printf("\nEnter voter's gender:");
			scanf("%s",&s[i].gender);
			printf("\nEnter voter's areacode:");
			scanf("%d",&s[i].age);
			count++;
		}
	}

}

void display()
{
	int i,count =1;
	printf("\n___________________Voters Details_________________\n");
	for(i=0;i<N;i++)
		{
			printf("\n%dst voter detail:\n",count);
			printf("\nvoter's age     : %d",s[i].age);
			printf("\nvoter's gender  : %s",s[i].gender);
			printf("\nvoter's areacode: %d",s[i].age);
			count++;
			printf("\n");
		}
}


