#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    
    printf("Enter the value of n upto which you want to print:");
    scanf("%d",&n);
    
    printf("\nFibonacci series --->");
    
    printf("\t %d \t %d",a,b);
    
    i=0;
    
    while(i<n-2)
    {
    
        c=a+b;
        printf("\t %d",c);
        
        a=b;
        b=c;
    
    
        i++;
    
    
    
    }







    return 0;
}
