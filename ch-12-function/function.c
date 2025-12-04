#include<stdio.h>

int total(int a,int b){
    return a+b;
}
int minus(int a,int b){
    return a-b;
}

int main(){

    int result= total(20,50);
    int result2=total(30,10);

    printf("result1: %d\n",result);

    printf("result2: %d\n",result2);

    int minusResult = minus(5,10);

    printf("minus1 result %d\n",minusResult);

    return 0;
}

