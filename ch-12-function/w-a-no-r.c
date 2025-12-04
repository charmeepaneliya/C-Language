#include<stdio.h>

//with argument no return value

void greetingMsg(char msg[]){
    printf("%s\n",msg);
}

void mul(int a,int b){
    printf("multiplication: %d\n",a*b);
}

int main(){
    greetingMsg("hello");

    mul(7,5);

    return 0;

}
