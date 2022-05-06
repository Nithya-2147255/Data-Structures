#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Abstarct Data Type
struct node
{
int info;
struct node *link;
}*front,*rear;

//ENQUEUE() - inserting an element in queue
void enqueue(int data)
{
struct node *temp;
temp = (struct node *)malloc(sizeof(struct node));
temp -> info = data;
temp -> link = NULL;

if(rear == NULL)
{
rear = temp;
front = temp;
}
else
{
rear -> link = temp;
rear = temp;
}
}

//DEQUEUE() - deleting an element in queue
void dequeue()
{
struct node *ptr;
struct node *temp;  
   ptr = front;

   if(front == NULL)  
   {  
       printf("queue is empty\n");
      return;  
   }  
   
   if(front->info % 10 == 0)
   {
    front=front->link;
   }

for(ptr=front; ptr != NULL; ptr=ptr->link)
{
if(ptr->info % 10 == 0)
{
temp->link = ptr->link;
}
else
temp = ptr;
}
}

// diaplay the elements in queue
void display()
{
struct node *q;
if(front == NULL)
{
printf("queue is empty");
}
else
{
q = front;
while(q!=NULL)
{
printf("%d\t",q->info);
q=q->link;
}
}
}

//main function
void main()
{
int ch;
int data;
printf("\n To delete all nodes with values having multiples of 10 \n ");
while(ch!=4)
{
printf("\n 1:Insert\n 2:Display\n 3:Delete\n 4:Exit \n");
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter data to be inserted: ");
scanf("%d",&data);
enqueue(data);
   break;
case 2:display();
   break;
case 3:dequeue();
   break;
case 4:exit(0);
}
}

}
