#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,r1p,r2p,c1p,c2p;
    int a[10][10],b[10][10],c[10][10],d[10][10];
    int add[10][10],sub[10][10],mul[10][10]={};
    int i,j,k;
    
    printf("Enter the value of row1:");
    scanf("%d",&r1);
    
    printf("\nEnter the value of col1:");
    scanf("%d",&c1);
    
    printf("\nEnter the value of row2:");
    scanf("%d",&r2);
    
    printf("\nEnter the value of row2:");
    scanf("%d",&c2);
    
    
    
    //input of 1st matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        
            printf("\n Enter the value of a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        
        }
    
    
    
    }
    
     //input of 2nd matrix
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        
            printf("\n Enter the value of b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        
        }
    
    
    
    }
    
    if(r1!=r2||c1!=c2)
    {
        printf("Addition or Subtraction not possible!!!");
    
    }
    else
    {
    
    
    
    
        for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
          {
          
              add[i][j]=a[i][j]+b[i][j];
          
          }
        
        }
    
      
          
        for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
          {
          
              sub[i][j]=a[i][j]-b[i][j];
          
          }
        
        }
        
        printf("\n ++++++Result (Addition)++++++++\n");
        for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
          {
          
              printf("%d\t",add[i][j]);
          
          }
         printf("\n");
        }
        
        printf("\n -------Result (Subtraction)--------\n");
        for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
          {
          
              printf("%d\t",sub[i][j]);
          
          }
         printf("\n");
        }
    
    
    
    
    
    }
    
    printf("\nEnter the value of row1:");
    scanf("%d",&r1p);
    
    printf("\nEnter the value of col1:");
    scanf("%d",&c1p);
    
    printf("\nEnter the value of row2:");
    scanf("%d",&r2p);
    
    printf("\nEnter the value of col2:");
    scanf("%d",&c2p);
    
     //input of 1st matrix
    for(i=0;i<r1p;i++)
    {
        for(j=0;j<c1p;j++)
        {
        
            printf("\n Enter the value of a[%d][%d]=",i,j);
            scanf("%d",&c[i][j]);
        
        }
    
    
    
    }
    
     //input of 2nd matrix
    for(i=0;i<r2p;i++)
    {
        for(j=0;j<c2p;j++)
        {
        
            printf("\n Enter the value of b[%d][%d]=",i,j);
            scanf("%d",&d[i][j]);
        
        }
    
    
    
    }
    
    if(c1p!=r2p)
    {
    
        printf("\n Matrix Multiplication is not possible!!!");
    
    }
    
    else
    {

          
            for(i=0;i<r1p;i++)
            {
              for(j=0;j<r2p;j++)
              {
                  for(k=0;k<c2p;k++)
                  {
                      mul[i][j]+=c[i][k]*d[k][j];
                  
                  }
              
              
              }
            
            }
       printf("\n*********Result (Multiplication)*******\n");
        for(i=0;i<r1p;i++)
        {
        
          for(j=0;j<c2p;j++)
          {
          
              printf("%d\t",mul[i][j]);
          
          }
         printf("\n");
        }




    }
    
    














    return 0;
}
