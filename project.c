#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
   void add();
   void substract();
   void divide();
   void power(int);
   void modulus();
int main()
{
    int choice = 0;
    do
    {
        system("cls");
        printf("------------MENU----------\n");
        printf("1. ADD\n2. SUBSTRACT\n3. DIVIDE\n4. SQUARE\n5. POWER\n6. MODULUS\nENTER YOUR CHOICE(0-6) :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:exit(0);
            
            case 1:add();
             break;
            case 2:substract();
             break;
            case 3:divide();
             break;
            case 4:power(1);
             break;
            case 5:power(2);
             break;
            case 6:modulus();
             break;
          default:printf("Invalid choice!!\n"); 
        }
        printf("Do you want to continue (1/0):");
        scanf("%d",&choice);
    }while(choice==1);
   
}
    void add()
    {
        int num1,num2,sum;
        printf("Enter the two numbers:");
        scanf("%d%d",&num1,&num2);
        sum= num1+num2;
        printf("Result : %d\n",sum);
        
    }
      void substract()
         {
             int num1,num2,minus;
             printf("Enter the two numbers :");
             scanf("%d%d",&num1,&num2);
             minus=num1-num2;
             
         }
       void divide ()
     {
            int num1,num2,res;
            printf("Enter the two numbers :");
            scanf("%d%d,&num1,&num2");
             res=num1/num2;
            printf("Result : %d\n",res);
        
      } 

     void power(int nonum)
     {
         int num1,num2,res;
         if (nonum==1)
         {
             printf("Enter the number:");
             scanf("%d ",&num1);
             res= num1*num1;
             printf("Result :%d\n",res);
             
         }
         else
         {
             printf("Enter the two numbers:");
             scanf("%d%d",&num1,&num2);
             res=pow((double)num1,(double)num2); 
             printf("Result : %d\n",res);
          }
        
    }
      void modulus()
         
          {
              int num1,num2,remainder;
              printf("Enter the two numbers :");
              scanf("%d%d",&num1,&num2);
              remainder= num1%num2;
              printf("Result :%d\n",remainder);
          }
       
