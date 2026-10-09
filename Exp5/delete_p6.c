#include<stdio.h>

int main()
{
  int a[100],n,i,pos=-1,element;
  
  printf("Enter number of elements:");
  scanf("%d",&n);
  
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
  {
  
    scanf("%d",&a[i]);
  
  }
  
  
  printf("\n Enter element to delete:");
  scanf("%d",&element);
  
  for(i=0;i<n;i++)
  {
      if(a[i]==element)
      {
          pos=i;
          break;
      }
  }

 if(pos==-1)
 {
    printf("Element not found");
 
 }
 else
 {
    for(i=pos;i<n;i++)
    {
    
        a[i]=a[i+1];
    }
    
    n--;
    
    printf("Array after deletion--->\n");
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
  }
 
    return 0;
  }
