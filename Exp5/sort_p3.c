#include<stdio.h>
int main()
{
  int a[10];
  int i,j,temp;
  
  for(i=0;i<10;i++)
  {
      printf("Enter value of a[%d]=",i);
      scanf("%d",&a[i]);
  
  }
  
  printf("\n Array before sorting---->");
  
  for(i=0;i<10;i++)
  {
      printf("%d\t",a[i]);
  }
  for(i=0;i<10;i++)
  {
      for(j=0;j<10;j++)
      {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
      }
  
  }
  
  printf("\n Array after sorting---->");
  
  for(i=0;i<10;i++)
  {
      printf("%d\t",a[i]);
  
  }
  return 0;
}


