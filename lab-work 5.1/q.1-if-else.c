#include<stdio.h>
int main()
{
    int a,b;

    
    printf("enter the first number\n");
    scanf("%d",&a);

    printf("enter the second number\n");
    scanf("%d",&b);

    if (a < b) {
        printf("Your number is less than: %d\n", a);
    } else {
        printf("Your number is greater than or equal to: %d\n", a);
    }


    return 0;
}

