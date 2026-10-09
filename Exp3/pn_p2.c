#include<stdio.h>

int main()
{

    float no;
    
    printf("\n Enter the number::");
    scanf("%f",&no);
    
    if(no>0)
    {
    
        printf("%.2f is Positive.",no);
    
    }
    else if(no<0)
    {
    
        printf("%.2f is Negative.",no);
    
    }
    else
    {
        printf("No. is zero.");

    }






      return 0;
}
