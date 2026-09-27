/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.9
          chapter:Character Arrays and Strings
*/
#include<stdio.h>
#include<string.h>


int main()
{
    char s1[100];
    char s2[100];
    char s3[200];
    int res,l1,l2,l3;
    
    printf("Enter string 1:");
    scanf("%s",s1);
    
    printf("\nEnter string 2:");
    scanf("%s",s2);
    
    res=strcmp(s1,s2);
    
    if(res==0)
    {
    
        printf("\nStrings are equal!!");
    
    
    }
    else
    {
        printf("\nStrings are not equal!!");
        strcat(s1,s2);
    
    }


     strcpy(s3,s1);
     
     l1=strlen(s1);
     l2=strlen(s2);
     l3=strlen(s3);
    
      printf("\n s1=%s \t length=%d char",s1,l1);
      printf("\n s2=%s \t length=%d char",s2,l2);
      printf("\n s3=%s \t length=%d char",s3,l3);











    return 0;
}
