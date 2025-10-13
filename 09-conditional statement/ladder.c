#include<stdio.h>
int main()
{
    int num;
    
    printf("enter your number\n");
    scanf("%d\n",&num);

    if(num>=90)
    {
        printf("your grade A");
    
    }
    else if(num>=70)
    {
        printf("your grade B");
    
    }
    else if(num>=50)
    {
        printf("your grad C");

    }
    else if(num>=40)
    {
        printf("your grad D");

    }
    else
    {
        printf("you failed");
    }

    return 0;
}

