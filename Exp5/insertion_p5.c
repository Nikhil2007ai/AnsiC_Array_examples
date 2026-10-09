#include<stdio.h>

int main()
{
  int a[100],n,i,index,element;
  
  printf("Enter number of elements:");
  scanf("%d",&n);
  
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
  {
  
    scanf("%d",&a[i]);
  
  }
  printf("Enter index=");
  scanf("%d",&index);
  
  printf("\n Enter element:");
  scanf("%d",&element);
  
  for(i=n;i>index;i--)
  {
      a[i]=a[i-1];
  }

  a[index]=element;
  n++;
  
  printf("Array after insertion:\n");
  for(i=0;i<n;i++)
  {
  
      printf("%d ",a[i]);
  }









  return 0;
}
