#include<stdio.h>
int main()
{
    float fahrenheit, celsius;

    printf("Enter The temperature Celsius:");

    scanf("%f",&celsius);

     fahrenheit = (9.0/5.0)*celsius + 32;

     printf("Your value temperature in fahrenheit:%.1f",fahrenheit);

     return 0;
}