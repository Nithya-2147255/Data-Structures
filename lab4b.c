/*
Q2.IMPLEMENT SORT ON STUDENT RECORDS IN A LINKED LIST
*/
#include <stdio.h>  
#include<string.h>
#include<stdlib.h>
#include<conio.h>
//Represent a node of the singly linked list  
struct snode
{	
  int rollno;
  char name[80]; 
  int marks;  
  struct snode *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct snode *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int m,int r,char n[]) {  
    //Create a new node  
    
    struct snode *newNode = (struct snode*)malloc(sizeof(struct snode));  
    newNode->marks = m;  
    newNode->rollno = r;
    strcpy(newNode->name,n);
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  
   
    //sortList() will sort nodes of the list in ascending order  
    void sortList() {  
        //Node current will point to head  
        struct snode *current = head, *index = NULL;  
        int temp,rtemp;
		char rn[80];  
          
        if(head == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {  
                //Node index will point to node next to current  
                index = current->next;  
                  
                while(index != NULL) {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->marks > index->marks) {  
                        temp = current->marks;  
                        strcpy(rn,current->name);
                        rtemp= current->rollno;
                        
                        current->marks = index->marks;  
                        current->rollno= index->rollno;
                        strcpy(current->name,"");
                        strcpy(current->name,index->name);
                        index->marks = temp;  
                        index->rollno=rtemp;
                        strcpy(index->name,"");
                        strcpy(index->name,rn);
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
        }  
    }  
   
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct snode *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }
	printf("\n \t_______\t \t____\t _____ "); 
    printf("\n|\tROLL_NO\t|\tNAME\t|\tMARKS\t|");
    printf("\n|\t_______\t|\t____\t|\t_____\t|");
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        
    printf("\n|\t%d\t|\t%s\t|\t%d\t| ", current->rollno,current->name,current->marks);  
    printf("\n|\t_______\t|\t____\t|\t_____\t|");
        current = current->next;  
    }  
    printf("\n");  
}  
      
void main()  
{ char n[80];
int ch=0,m,r;
while(ch!=4)
{
	printf("\nSTUDENT RECORDS LINK LIST OPERATIONS\n1.ADD NEW RECORD\n2.DISPLAY THE RECORD LIST\n3.SORT THE RECORD LIST\n4.EXIT\nENTER YOUR CHOICE: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("\nADD NEW RECORD");
        printf("\nEnter Student Name: ");
        scanf("%s",&n);
        printf("\nEnter Student Rollno: ");
        scanf("%d",&r);
        printf("\nEnter Student Marks: ");
        scanf("%d",&m);
    //Adds data to the list  
        addNode(m,r,n); 
		break;
	case 2:
		printf("\nDISPLAYING NEW RECORDS...\n"); 
		display();//displaying list
		break;
	case 3:
		printf("\nSORTING STUDENT RECORDS...");
		sortList(); //sorting list
		break;
	case 4:
		printf("\nExiting Student Repository...");
		exit(0);
		break;
	default:
		printf("\nEnter valid option!!!");
		break;
   
}
          
    
}  
}
