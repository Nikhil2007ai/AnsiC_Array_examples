/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.8
          chapter:Character Arrays and Strings
*/
#include<stdio.h>

int main()
{
    char first_name[20];
    char last_name[20];
    char name[100];
    int i,j;
    
    printf("Enter first name:");
    scanf("%s",first_name);
     
    printf("Enter Second name:");
    scanf("%s",last_name);
    
    i=0;
    while(first_name[i]!='\0')
    {
          name[i]=first_name[i];
          i++;
    }

    // adding space between first_name and last_name
    name[i]=' ';
    i++;
    
     j=0;
     while(last_name[j]!='\0')
     {
          name[i]=last_name[j];
          j++;
          i++;

     }
     
     name[i]='\0';
     
     printf("Full name=%s",name);
    
    
    
    
    
    return 0;
}
