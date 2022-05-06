#include<stdio.h>
#include<stdlib.h>
#define max 10
struct node 
{
	int coeff;
	int digree;	
	struct node * link;		// Structure definition		
	
};
struct node * ptr,*head;

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
	struct node * obj;
	for(i=0;i<size;i++)
	{
		obj=malloc(1*sizeof(struct node));
		if(head==NULL)
		{
			head=obj;
			ptr=head;
		
		}
		printf("Enter the digree\n");
		scanf("%d",&obj->digree);
		printf("Enter the coefficient\n");
		fflush( stdin );
		scanf("%d",&obj->coeff);
		ptr->link=obj;
		
	}

}

void put_data(int size)
{
	int i;
	struct node * obj;
	ptr=head;
	for(i=0;i<size;i++)
	{
	
		if(head==NULL)
		{
		
			printf("Empty\n");
		
		}
		else
		{
			
		
		printf("Digree :%d\t",ptr->digree);
		printf("Coeffcient :%d\n",ptr->coeff);
		ptr=ptr->link;
	}
		
	
	}
}
