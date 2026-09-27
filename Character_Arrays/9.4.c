/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.4
          chapter:Character Arrays and Strings
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    
    int v_count=0,c_count=0;
    int i=0;
    
    printf("Enter a string:");
    fgets(str,50,stdin);
    
    while(str[i]!='\0')
    {
          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
          {
             v_count++;
          
          }
          else
          {
              c_count++;
              
          
          }
        i++;

    
    
    
    }
    
    printf("\n Number of Vowels=%d",v_count);
    printf("\n Number of Consonanats=%d",c_count);








    return 0;
}
