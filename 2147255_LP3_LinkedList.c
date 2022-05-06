/*Concept of Linked list with create, display, insert, delete and search operations*/
#include<stdlib.h>
#include<stdio.h>
     
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void search();
 
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;

int main()     
{
        int choice;
        while(1)
		{
               
               
                printf("\n1.Create Linked List");
                printf("\n2.Display List");
                printf("\n3.Insert at the beginning");
                printf("\n4.Insert at the end");
                printf("\n5.Insert at specified position");
                printf("\n6.Delete from beginning");
                printf("\n7.Delete from the end");
                printf("\n8.Delete from specified position");
                printf("\n9.Search an element from the list");
                printf("\n10.Exit\n ");
                printf("\nEnter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        case 9:		
                                        search();
                        		break;
                        case 10:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space");
                exit(0);
        }
        printf("\nEnter the data value for the node:");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:");
                while(ptr!=NULL)
                {
                        printf("%d \t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space");
                return;
        }
        printf("\nEnter the position for the new node to be inserted: ");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node: ");
        scanf("%d",&temp->info) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\n Position not found \n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\n List is Empty");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\n The deleted element is : %d",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\n List is Empty");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is: %d",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\n The deleted element is: %d ",ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted: ");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\n The deleted element is: %d",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\n Position not Found \n ");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\n The deleted element is:%d",ptr->info );
                        free(ptr);
                }
        }
}

void search()
{
	int flag=0,value;
	
	struct node *search_node = start;
	printf("\nEnter the element you want to search from the list: \n");
	scanf("%d",&value);
	while(search_node!=NULL)
    {
        if(search_node->info==value)
        {
            printf("%d is present in this list\n", value);
            flag = 1;
            break;
        }
        else
            search_node = search_node->next;
    }

    if(flag==0)
    {
    	printf("Item not found\n");
	}
        
}
