#include <stdio.h>
#include <stdlib.h>
#include "Practice2.3.h" // Header file
int main (void)
{
// Local Definitions
int* newData;
int* nodeData;
NODE* node;
// Statements
newData = (int*)malloc (sizeof (int));
*newData = 7;
node = createNode (newData);
nodeData = (int*)node->dataPtr;
printf ("Data from node: %d\n", *nodeData);
return 0;
}

