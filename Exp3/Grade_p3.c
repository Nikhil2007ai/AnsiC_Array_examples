#include<stdio.h>

int main()
{
  int mark;
  
  printf("\n Enter the marks::");
  scanf("%d",&mark);
  
  
  if(mark>80)
  {
      printf("Grade=A");
  }
  else if(mark>60&&mark<=80)
  {
  
      printf("Grade=B");
  }
  else if(mark>50&&mark<=60)
  {
  
      printf("Grade=C");
  }
  else if(mark>40&&mark<=50)
  {
  
      printf("Grade=D");
  }
  else if(mark>35&&mark<=40)
  {
  
      printf("Grade=E");
  }
  else if(mark>=0 && mark<=35)
  {
      printf("Grade=F");
  
  }
  else
  {
      printf("Invalid marks");
  }








  return 0;
}
