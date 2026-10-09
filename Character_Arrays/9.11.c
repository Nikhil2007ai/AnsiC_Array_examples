/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.11
          chapter:Character Arrays and Strings
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[5][50];
    char temp[50];
    
    int i,j;
    
    for(i=0;i<5;i++)
    {
        printf("Enter %d string=",i+1);
        scanf("%s",str[i]);
    
    
    }
    
     printf("\nStrings before sorting----->\n");

     for(i=0;i<5;i++)
     {
          printf("%s\t",str[i]);
     }
    
    
    
    for(i=0;i<4;i++)
    {
      for(j=0;j<4;j++)
      {
          if(strcmp(str[j],str[j+1])>0)
          {
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
          }
      }
    
    }
    
 
 printf("\nStrings after sorting----->\n");

 for(i=0;i<5;i++)
 {
      printf("%s\t",str[i]);

 }


  return 0;
}
