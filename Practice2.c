/* Program to create an array of size N and perform the following operations
a. Replace all duplicate values with zero
b. Delete all duplicate values
c. Try to implement (a) and (b) with dynamic memory allocation 
*/

#include <stdio.h>
#include <conio.h>

/* function readArray(), to read array elemenets from keyboard 
void readArray (int arr[], int size)
{
	int i=0;
	printf("Enter the array elements:\n");
	for (i=0;i<size;i++)
	{
		printf("arr[%d]:", i);
		scanf("%d, &arr[i]");
	}
}

/* function printArray(), to display array elemennts on monitor 
void printArray(int arr[], int size)
{
	int i=0;
	printf("\nArray elements are: \n");
	for(i=0;i<size;i++)
	{
		printf("arr[%d]: %d \n",i ,arr[i]);
	}
}

/* main function 
int main()
{
	int arr[5];
	readArray(arr, 5);
	printf("\nBefore Replacement\n");
	printArray(arr, 5);
	
	return 0;
}

*/




void readArray(int arr[], int size)
{
    int i = 0;

    printf("\nEnter elements : \n");

    for (i = 0; i < size; i++) {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

/** funtion :   printArray() 
    input   :   arr ( array of integer ), size 
    to display ONE-D integer array on standard output device (moniter). 
**/
void printArray(int arr[], int size)
{
    int i = 0;

    printf("\nElements are : ");

    for (i = 0; i < size; i++) {
        printf("\n\tarr[%d] : %d", i, arr[i]);
    }
    printf("\n");
}

/** funtion :   replaceEvenOdd() 
    input   :   arr ( array of integer ), size 
    to replace EVEN elements by 0 and ODD elements by 1. 
**/
void replaceEvenOdd(int arr[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = 0;
    }
}

int main()
{
    int arr[5];

    readArray(arr, 5);

    printf("\nBefore replacement : ");
    printArray(arr, 5);

    replaceEvenOdd(arr, 5);

    printf("\nAfter replacement : ");
    printArray(arr, 5);

    return 0;
}
