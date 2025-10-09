#include<stdio.h>

int main()
{
    float basicSalary,grossSalary,TA,DA,HRA;

    float daAmount,taAmount,hraAmount;

    printf("enter basic salary\n");
    scanf("%f",&basicSalary);


    printf("enter your DA\a");
    scanf("%f",&DA);

    printf("enter your TA\a");
    scanf("%f",&TA);

    
    printf("enter your HRA\a");
    scanf("%f",&HRA);

    daAmount = (basicSalary*DA)/100;

    taAmount = (basicSalary*TA)/100;

    hraAmount = (basicSalary*HRA)/100;

    printf("da%f", daAmount);

    grossSalary = basicSalary + daAmount + taAmount + hraAmount;

    printf("Gross Salary:%.2f",grossSalary);

    return 0;
}