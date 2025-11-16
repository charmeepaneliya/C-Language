#include<stdio.h>
 
int main()
{
    int num1,num2;

    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    printf("Addition (num1+num2) = %d\n",num1+num2);
    printf("Subtraction (num1-num2) = %d\n",num1-num2);
    printf("Multiplication (num1*num2) = %d\n",num1*num2);

    if(num2 != 0){
       printf("Division (num1/num2) = %d\n",num1/num2);
       printf("Modulus (num1 %% num2) = %d\n",num1%num2);
    }



    return 0;
}