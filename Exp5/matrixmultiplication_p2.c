#include<stdio.h>

int main()
{
  int a[3][3],b[3][3],c[3][3];
  int i,j,k;
  // Input for first matrix 
  for(i=0;i<3;i++)
  {
  
      for(j=0;j<3;j++)
      {
          printf("Enter value of a[%d][%d]=",i,j);
          scanf("%d",&a[i][j]);
      }
  
  }
  //Input for second matrix
  for(i=0;i<3;i++)
  {
  
      for(j=0;j<3;j++)
      {
          printf("Enter value of b[%d][%d]=",i,j);
          scanf("%d",&b[i][j]);
      }
  
  }
  //first matrix 
   
  printf("\n First matrix--->\n");
  for(i=0;i<3;i++)
  {
  
      for(j=0;j<3;j++)
      {
          printf("%d\t",a[i][j]);
          
      }
      printf("\n");
  
  }
  
  //second matrix 
  
  printf("\n Second matrix--->\n");
  for(i=0;i<3;i++)
  {
  
      for(j=0;j<3;j++)
      {
          printf("%d\t",b[i][j]);
          
      }
      printf("\n");
  
  }
  
  
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          c[i][j]=0;
          
          for(k=0;k<3;k++)
          {
          
            c[i][j]+=a[i][k]*b[k][j];         
          }
     }
  
  
 }
 
 printf("\nResultant matrix---->\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
    
        printf("%d\t",c[i][j]);
    
    
    }
    printf("\n");





  }
  






  return 0;
}
