#include<stdio.h>

int main()
{
    int a=10, b=20;

    printf("a:%d, b:%d",a,b);

    if(a==b){
        printf("a is equal to b\n");
    }else{
         printf("a is NOT equal to b\n");
    }

    if(a!=b){
        printf("a is NOT equal to b (using !=)\n");
    }

    if(a>b){
          printf("a is greater than b\n");
    }
    if(a<b){
          printf("a is less than b\n");
    }
    if(a>=b){
        printf("a is greater OR equal to b\n");
    }
    return 0;
}