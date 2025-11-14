#include<stdio.h>

int main()
{
     float basic, ta, da, hra, gross;

     printf("Enter the basic salary:");
     scanf("%f",&basic);

    ta  = basic*0.05;  
    da  = basic*0.10;  
    hra = basic*0.20;

    gross=basic+ta+da+hra;

    printf("Basic Salary = %.2f\n", basic);
    printf("TA=%.2f\n",ta);
    printf("DA=%.2f\n", da);
    printf("HRA=%.2f\n", hra);
    printf("Gross Salary=%.2f\n", gross);

    return 0;
}