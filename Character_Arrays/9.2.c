/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.2
          chapter:Character Arrays and Strings
*/
#include<stdio.h>
int main()
{
    char line[80],character;
    int c;
    
    c=0;
    
    printf("Enter text:");
    
    do
    {
      character=getchar();
      
      line[c]=character;
      c++;
    
    
    
    
    
    
    
    }while(character!='\n');
    c=c-1;
    line[c]='\0';
    
    printf("\n%s\n",line);












    return 0;
}
