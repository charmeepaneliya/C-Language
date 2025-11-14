#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter the a of triangle:");
    scanf("%f",&a);
    printf("Enter the b of triangle:");
    scanf("%f",&b);
    
    c=0.5*a*b;

    printf("Triangle=%.2f\n",c);

    return 0;
}