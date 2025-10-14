#include<stdio.h>

int main()
{
    float basicSalary,grossSalary,TA,DA,HRA;

    float daAmount,taAmount,hraAmount;

    printf("Enter basic salary\n");
    scanf("%f",&basicSalary);


    printf("Enter your DA\a");
    scanf("%f",&DA);

    printf("Enter your TA\a");
    scanf("%f",&TA);

    
    printf("Enter your HRA\a");
    scanf("%f",&HRA);

    daAmount = (basicSalary*DA)/100;

    taAmount = (basicSalary*TA)/100;

    hraAmount = (basicSalary*HRA)/100;

    printf("da%f", daAmount);

    grossSalary = basicSalary + daAmount + taAmount + hraAmount;

    printf("Gross Salary:%.2f",grossSalary);

    return 0;
}