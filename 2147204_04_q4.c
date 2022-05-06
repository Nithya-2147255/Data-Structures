#include<stdio.h>
#include<stdlib.h>
#define max 10
struct node 
{
	int index;
	char data;	
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
		printf("Enter the index\n");
		scanf("%d",&obj->index);
		printf("Enter the data\n");
		fflush( stdin );
		scanf("%c",&obj->data);
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
			
		
		printf("Index :%d\t",ptr->index);
		printf("Data :%c\n",ptr->data);
		ptr=ptr->link;
	}
		
	
	}
}
