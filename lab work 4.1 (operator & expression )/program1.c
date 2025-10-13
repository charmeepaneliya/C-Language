//write a program evaluate the formula=(x+y)2

#include<stdio.h>
int main(){

    int x, y;
    int result;

    printf("\nenter the value of x:");
    scanf("%d",&x);

    printf("\nenter the value of y:");
    scanf("%d",&y);

    result = (x + y) * (x + y);

    printf("show your result:%d\n",result);


    return 0;
}