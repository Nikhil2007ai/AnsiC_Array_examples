#include<stdio.h>

int main()
{
    int a[10][10],t[10][10];
    int r,c,i,j;
    
    printf("\n Enter row:");
    scanf("%d",&r);
    
    printf("\n Enter column:");
    scanf("%d",&c);
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
              printf("\n Enter the value of a[%d][%d]=",i,j);
              scanf("%d",&a[i][j]);
        }
    }
    
    printf("\n=======original Matrix=========\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {

              printf("%d\t", a[i][j]);

        }

    printf("\n");
    }
    
    
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }

 }
    
    printf("\n========Transpose========\n");
    for(i=0;i<c;i++)
    {

        for(j=0;j<r;j++)
        {

              printf("%d\t", t[i][j]);

        }

    printf("\n");
    }
    
    return 0;
  }
