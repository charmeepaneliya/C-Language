#include<stdio.h>

int main(){

    char letter[6] = "hello";

    printf("%c\n",letter[0]);
    printf("%c\n",letter[1]);
    printf("%c\n",letter[2]);

    for(int i=0;i<=6;i++){

        printf("%c",&letter[i]);
    }

    return 0;
}