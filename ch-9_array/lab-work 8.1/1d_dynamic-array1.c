#include<stdio.h>

int main(){

    int num[5]={};

    printf("enter the first element of an array");
    scanf("%d",&num[0]);
    printf("enter the second element of an array");
    scanf("%d",&num[1]);
    printf("enter the third element of an array");
    scanf("%d",&num[2]);
    printf("enter the fourth element of an array");
    scanf("%d",&num[3]);
    printf("enter the fifth element of an array");
    scanf("%d",&num[4]);

    printf("first element of an array:%d",num[0]);

    return 0;
}