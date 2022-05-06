#include<stdio.h>
#include<stdlib.h>
struct mca
{
	int reg_no;
	char name[10];
	int performance_score;
	struct mca * link;
};

struct mca* head_a,*head_b,* head_c;
struct mca * obj;

struct mca* get_data(struct mca* head);
void print_data(struct mca* head);
void  sort(struct mca*,struct mca*);

void main()
{
	int choise=0,choise_1=0;
	do
	{
	
	printf("Enter 1 for A section enter 2 for B section");
	scanf("%d",&choise);
	switch(choise)
	{
		case 1: head_a=get_data(head_a);
				printf("Enter 1 to print\n");
				scanf("%d",&choise_1);
				switch(choise_1)
				{
					case 1: print_data(head_a);
							break; 
					default: printf("Wrong entry\n");
				}
				break;
				
		case 2: head_b=get_data(head_b);
				printf("Enter 1 to print\n");
				scanf("%d",&choise_1);
				switch(choise_1)
				{
					case 1: print_data(head_b);
							break; 
					default: printf("Wrong entry\n");
				}
				break;
				
	/*	case 3 : sort(head_a,head_b);
				break;*/
		
		default : printf("Wrong entry\n");
	}
}while(choise>0);
	
	
	
}
struct mca* get_data(struct mca* head)
{
	int reg_no;
	struct mca * ptr;
	int i;
	for(i=0;i<2;i++)
	{
		
		obj=malloc(1*sizeof(struct mca));
		if(head==NULL)
		{
			head=obj;
			ptr=head;
		
		}
			
				printf("Enter the register no ");
				scanf("%d",&(obj->reg_no));
				printf("Enter name\n");
				scanf("%s",&(obj->name));
				printf("Enter the performance score\n");
				scanf("%d",&(obj->performance_score));
				ptr->link=obj;
		
			
		
	}	
	
	return head;
}

void print_data(struct mca* head)
{
	struct mca * ptr;
	int i;
	ptr=head;
	for(i=0;i<2;i++)
	{
		if(head==NULL)
		{
			printf("Empty");
		
		}
		else
		{
			printf("\nReg NO: %d\n",ptr->reg_no);
			printf("NAME: %s\n",ptr->name);
			printf("Performance Score: %d\n",ptr->performance_score);	
			ptr=ptr->link;	
		}

		
	}	
}

