#include<stdio.h>
int main()
{
    float fahrenheit, celsius;

    printf("The temperature Celsius:");

    scanf("%f",&celsius);

     fahrenheit = (9.0/5.0)*celsius + 32;

     printf("The temperature in fahrenheit:%.1f",fahrenheit);

     return 0;
}