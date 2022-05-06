#include<stdio.h>
#include<conio.h>

//defining the size of stack as 10
#define SIZE 10

//function declaration
void push(int);
void pop();
void display();

//global variables for stack and top initialzation
int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   printf("\n Stack using Array \n");
   while(1)
   {	
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 push(value); //calling push() function
		 break;
	 case 2: pop(); //calling pop() function
		 break;
	 case 3: display(); //calling diaplay() function
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}

//PUSH() - to insert an element in a stack 
void push(int value){
   if(top == SIZE-1) 
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
}

//POP() -  to delete an element in a stack from top 
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}

//display the elements in the stack
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}
