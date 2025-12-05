#include<stdio.h>

int sum(){
    return 5+15;
}

void result(){
    int result = sum();

    printf("addition : %d\n",result);

   
}

int main(){

    result();
    sum();

    return 0;
}
