#include<stdio.h>

int main()
{
   int n,flag=0,i;
   
   
   printf("Enter the number =");
   scanf("%d",&n);
   
   if(n<=1)
   {
      flag=1;
   
   }
   else
   {
   
      for(i=2;i<n;i++)
      {
         if(n%i==0)
         {
           flag=1;
           
         }
   
      }
    }
    
   if(flag==0)
   {
      printf("%d is a prime number.",n);
   
   }
   else
   {
   
      printf("%d is not a prime number.",n);
   
   }




    return 0;
}
