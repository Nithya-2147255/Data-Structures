#include<stdio.h>
#include<conio.h>

//defining the linked list using struct
struct Node
{
   int data;
   struct Node *next;
}*top = NULL;

//function declaration
void push(int);
void pop();
void display();

//main function
void main()
{
   int choice, value;
   printf("\n Stack using Linked List \n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 push(value); //calling push() function
		 break;
	 case 2: pop(); //calling pop() function
	 break;
	 case 3: display(); //calling diaplay() function
	 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}

//PUSH() - to insert an element in a stack
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node)); //dynamic memory allocation 
   newNode->data = value; //inserting an element using node on top of the stack
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\nInsertion is Success!!!\n");
}

//POP() -  to delete an element in a stack from top
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}

//display the elements in the stack
void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}
