#include <stdio.h>
int main ()
{
// Local Definitions
void* p;
int i = 7 ;
float f = 23.5;
// Statements
p = &i;
printf ("i contains: %d\n", *((int*)p) );
p = &f;
printf ("f contains: %f\n", *((float*)p));
return 0;
}
