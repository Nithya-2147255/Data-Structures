
#include<stdio.h>
#include<string.h>
char source_string[100],pattern_string[100];

int main()
{
int choice;
printf("*********************************************\n");
printf("\nPATTERN MATCHING PROGRAM\n");
printf("Enter the Source String ");
    scanf("%s",source_string);
    printf("Enter the pattern ");
    scanf("%s",pattern_string);
printf("1.USING BRUTE FORCE METHOD\n2.USING KMP METHOD\n3.Compare result togther\nENTER YOUR CHOICE\n");
printf("*********************************************\n");
scanf("\n\t%d",&choice);

if(choice==1)
{
int pos=brute_force();
if(pos==-1){
 printf("%s pattern not found in text",pattern_string);
}
else
{
 printf("%s pattern found at index %d",pattern_string,pos);
}
}


else if( choice==2)
{
   KMP_SEARCH_METHOD(pattern_string, source_string);
   
}
else if(choice==3){
   printf("\n*******USING brute_force method********\n");
    int pos=brute_force();
if(pos==-1){
 printf("\n%s pattern not found in text",pattern_string);
}
else
{
 printf("\n%s pattern found at index %d",pattern_string,pos);
}

printf("\n*******USING KMP method*********\n");
KMP_SEARCH_METHOD(pattern_string, source_string);
   
}


else {
printf("invalid choice");}
return 0;

}


/////////////////////////////////////////////
///// function for brute_force method///////
///////////////////////////////////////////
int brute_force( )
{
  int n,j,m,i;
       n=strlen(source_string);
       m=strlen(pattern_string);
       for(i=0;i<n;i++)
      {
             j=0;
             while(j<m && source_string[i+j]==pattern_string[j])
            {
                     j++;
                    if(j==m)
                            return i;  //pattern found
            }
      }
      return -1;  //pattern not found
}
////////////////////////////////////////////
///////////////////////////////////////////
//kmp method serach function//////////////
////////////////////////////////////////

void  KMP_SEARCH_METHOD(char* pattern_string, char* source_string)
{
    int M = strlen(pattern_string);
    int N = strlen(source_string);
    int lps[M];
 
   
    failure_function(pattern_string, M, lps);
 
    int i = 0;
    int j = 0;
    while (i < N) {
        if (pattern_string[j] == source_string[i]) {
            j++;
            i++;
        }
 
        if (j == M) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }
 
        // mismatch after j matches
        else if (i < N && pattern_string[j] != source_string[i]) {
           
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}



void failure_function(char* pattern_string, int M, int* lps)
{
   
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pattern_string[i] == pattern_string[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
           
            if (len != 0) {
                len = lps[len - 1];
 
               
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
