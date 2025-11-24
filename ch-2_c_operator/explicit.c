#include<stdio.h>

int main()
{
    int num=5;
    float result;

    result=(float)num;

    printf("Integer value: %d\n", num);
    printf("After casting to float:%1.f\n",result);

    return 0;
}