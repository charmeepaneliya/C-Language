#include<stdio.h>

int main(){

    char letter[6] = "hello";

    letter[1]='a';

    printf("%s\n",letter);

    printf("enter character to change");
    scanf("%c",&letter[4]);

    printf("%s",letter);

    return 0;

}