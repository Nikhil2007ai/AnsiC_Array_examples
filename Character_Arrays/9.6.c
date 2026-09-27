/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.6
          chapter:Character Arrays and Strings
*/
#include<stdio.h>

int main()
{
    int c,d;
    
    char string[]="Cprogramming";
    printf("\n\n");
    
    printf("----------------------------");
    
    for(c=0;c<=11;c++)
    {
    
        d=c+1;
        printf("|%12.*s|\n",d,string);
    
    }
    printf("|-------------------------|");
    
    for(c=11;c>=0;c--)
    {
    
        d=c+1;
        printf("|%-12.*s|\n",d,string);
    
    
    }
    printf("--------------------------\n");













    return 0;
}
