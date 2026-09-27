/* 
          Name: Nikhil Shee
          Batch: F2
          Roll Number: 101
          Branch: IT
          Example: 8.1(Sum of squares of 10 terms)
          chapter: Array
*/

#include<stdio.h>

int main()
{
    float x[10];
    int i;
    float total=0;
    
    //Reading values from user
    for(i=0;i<10;i++)
    {
        printf("Enter value of x[%d]=",i);
        scanf("%f",&x[i]);
    
    }
    //computation of Total
    
    for(i=0;i<10;i++)
    {
        total+=x[i]*x[i];
    
    
    
    
    }
    //printing of x[1] values and total sum
    
    for(i=0;i<10;i++)
    {
        printf("x[%d]=%f\n",i+1,x[i]);
    
    }

    printf("\n Sum of 10 terms = %.2f",total);
    
    
    








    return 0;
}
