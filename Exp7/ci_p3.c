#include<stdio.h>

float compoundInterest(float p,float r,float n);

int main()
{
  float a,b,c,total;
   
  printf("Enter the principal amount=");
  scanf("%f",&a);
  
  printf("Enter the rate of interest=");
  scanf("%f",&b);
  
  printf("Enter the time period=");
  scanf("%f",&c);
  
  
  total=compoundInterest(a,b,c);
  
  printf("\nThe required Total amount=%.3f ",total);
  
  




    return 0;
}

float compoundInterest(float p,float r,float n)
{

      int total,i;
      for(i=1;i<=n;i++)
      {
          total=p*(1+r);
          p=total;
      }
      return p;
     

}
