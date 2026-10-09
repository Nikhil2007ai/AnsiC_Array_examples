#include<stdio.h>

int main()
{
  int a[10],min,max,i,temp,max_pos,min_pos;
  
  for(i=0;i<10;i++)
  {
      printf("Enter the element of a[%d]=",i);
      scanf("%d",&a[i]);
  
  
  }
  
  max=a[0];
  min=a[0];
  
  for(i=0;i<10;i++)
  {
      if(a[i]>max)
      {
          max=a[i];
          max_pos=i;
      }
      if(a[i]<min)
      {
          min=a[i];
          min_pos=i;
      }
  
  
  }
  printf("\n Maximum=%d",max);
  printf("\n Minimum=%d",min);
  
  
  temp=a[min_pos];
  a[min_pos]=a[max_pos];
  a[max_pos]=temp;
  
  printf("\nArray after swaping=");
  
  
  for(i=0;i<10;i++)
  {
  
      
      
      printf("%d\t",a[i]);
  
  
  
  }




  return 0;
}
