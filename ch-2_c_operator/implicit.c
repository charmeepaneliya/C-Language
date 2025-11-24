#include<stdio.h>
 
int main()
{
    int a=10;
    float b=2.5;
    float result;

    result = a+b;

    printf("value of a(int):%d\n",a);
    printf("value of b(float):%.1f\n",b);
    printf("result(implicit float):%.1f\n",result);

    return 0;
}