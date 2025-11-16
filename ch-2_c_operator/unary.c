#include<stdio.h>

int main()
{
    int a=10;

    printf("initial value of a :%d\n",a);

    printf("Using ++a  (pre-increment): %d\n", ++a);

    printf("Using a++  (post-increment): %d\n", a++); 
    printf("Value of a after a++: %d\n\n", a);

    printf("Using --a  (pre-decrement): %d\n", --a);

    printf("Using a--  (post-decrement): %d\n", a--); 
    printf("Value of a after a--: %d\n\n", a);

    printf("using -a (unary minus): %d",a);

    return 0;
}