#include<stdio.h>

int factorial(int n){
    if(n<0 || n==1){
    return 1;
  }else{
    return n*factorial(n-1);
  }

}

int main(){

    int result = factorial(5);

    printf("result : %d\n",result);

    int result2 = factorial(20);

    printf("result2 : %d\n", result2);

    return 0;
}
 
