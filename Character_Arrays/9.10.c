/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.10
          chapter:Character Arrays and Strings
*/
#include<stdio.h>

int main()
{
    char str[100],rev[100];
    int i,len=0,j=0,same=0;
    
    
    printf("Enter the string:");
    scanf("%s",str);
    
    
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    
    }
    
    for(i=len-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    
    }
    
    rev[i]='\0';
    
    i=0;
    while(str[i]!='\0'&& rev[i]!='\0')
    {
    
    
        if(str[i]!=rev[i])
        {
          same=1;
          break;
        }
    
      i++;
    }


    if(same==0)
      printf("%s is palindrome!!",str);
    else
      printf("%s is not Palindrome!!!",str);

    return 0;
}
