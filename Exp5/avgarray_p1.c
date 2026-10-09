#include<stdio.h>

int main()
{
  int arr[10];
  int sum=0,i;
  float avg=0;
  
  for(i=0;i<10;i++)
  {

      printf("Enter element for arr[%d]=",i);
      scanf("%d",&arr[i]);


  }
  
  for(i=0;i<10;i++)
  {

      sum+=arr[i];


  }
  
  avg=sum/10.0;
  
  printf("\nAVG=%.2f",avg);




  return 0;
}
