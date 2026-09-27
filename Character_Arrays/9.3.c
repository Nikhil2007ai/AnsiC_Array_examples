/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 9.3
          chapter:Character Arrays and Strings
*/
#include<stdio.h>
int main()
{
  char str1[60],str2[60];
  
  int i;
  
  printf("Enter the string:");
  scanf("%s",str1);
  
  for(i=0;str1[i]!='\0';i++)
  {
    str2[i]=str1[i];
    
  
  
  
  }
  str2[i]='\0';
  
  printf("\n String is ----->");
  printf("%s \n",str2);










    return 0;
}
