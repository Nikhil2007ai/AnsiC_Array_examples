#include<stdio.h>
#include<stdlib.h>

int main()
{

    int choice;
    
    float no1,no2,sum,mul,div,sub;
     do
     {
     printf("=========Calculator==========\n");
     printf("\n1----Addition");
     printf("\n2----Subtraction");
     printf("\n3----Multiplication");
     printf("\n4----Division");
     printf("\n5----Exit\n");
     printf("\n Enter your choice::");
     scanf("%d",&choice);
     
     
     switch(choice)
     {
           case 1:printf("========Addition========\n");
                  printf("\n Enter number 1=");
                  scanf("%f",&no1);
                  printf("\n Enter number 2=");
                  scanf("%f",&no2);
                  sum=no1+no2;
                  printf("Result=%.2f\n",sum);
                  break;
          case 2:printf("========Subtraction========\n");
                  printf("\n Enter number 1=");
                  scanf("%f",&no1);
                  printf("\n Enter number 2=");
                  scanf("%f",&no2);
                  sub=no1-no2;
                  printf("Result=%.2f\n",sub);
                  break;
          case 3:printf("========Multiplication========\n");
                  printf("\n Enter number 1=");
                  scanf("%f",&no1);
                  printf("\n Enter number 2=");
                  scanf("%f",&no2);
                  mul=no1*no2;
                  printf("Result=%.2f\n",mul);
                  break;
          case 4:printf("========Division========\n");
                  printf("\n Enter number 1=");
                  scanf("%f",&no1);
                  printf("\n Enter number 2=");
                  scanf("%f",&no2);
                  div=no1/no2;
                  printf("Result=%.2f\n",div);
                  break;
          case 5:exit(0);
                 break;
                 
          default:printf("\n Invalid Choice!!!!");
    
    
     }//end of switch
     }while(choice!=5);//end of dowhile

    return 0;
}
