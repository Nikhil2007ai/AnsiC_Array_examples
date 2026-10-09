#include<stdio.h>

float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);


int main()
{
    float a,b,ans;
    int choice;
    do 
    {
    printf("\n1---Add");
    printf("\n2---Sub");
    printf("\n3---mul");
    printf("\n4---div");
    printf("\n5---exit");
    
    printf("\nEnter your choice(1-5):");
    scanf("%d",&choice);
    printf("\nEnter the value of a and b:");
    scanf("%f %f",&a,&b);
    
    switch(choice)
    {
        case 1:printf("\n=========Addition==========");
               ans=add(a,b);
               break;
        case 2:printf("\n=========Subtraction=========");
               ans=sub(a,b);
               break;
        case 3:printf("\n=========Multiplication=======");
               ans=mul(a,b);
               break;
        case 4:printf("\n==========Division============");
               ans=div(a,b);
               break;
        case 5: break;
        default:printf("\nInvalid choice");
        
        
               
        
    
    
    
    
    
    
    
    }
    printf("\nThe required result=%.2f",ans);




    }while(choice!=5);
    return 0;
}

float add(float a,float b)
{

        float sum;
        
        sum=a+b;
         
        return sum;
}

float sub(float a,float b)
{

      float subt;
      
      subt=a-b;
      
      return subt;




}

float mul(float a,float b)
{

    float mult;
    
    mult=a*b;
    
    return mult;


}

float div(float a,float b)
{
      float divi;
      
      if(b!=0)
      {
        divi=a/b;
        return divi;
      }
      else
      {
        return 0;
      }
      
      





}
