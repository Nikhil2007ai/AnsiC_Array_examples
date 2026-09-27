#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main()
{
    char a[16];
    int i,j,k,len;
    
    printf("Enter a Binary number:");
    scanf("%s",a);
    
    len=strlen(a);
    
    for(k=0;a[k]!='\0';k++)
    {   
          if(a[k]!='0' && a[k]!='1')
          {
          
                printf("\nIncorrect binary number!!");
                
                exit(0);
          
          
          
          }





    }
    
    for(i=len-1;a[i]!='1';i--);
    
    for(j=i-1;j>=0;j--)
    {
    
          if(a[j]=='1')
               a[j]='0';
        
          else
                a[j]='1';
              
    
    
    
    }
    printf("\n 2's Compliment = %s",a);







}
