#include<stdio.h>

int main(){

    char word[6]="hello";

    printf("%s\n",word);

    char word2[6]={'h','e','l','l','o','\0'};

    printf("%c\n",word2);

    for(int i=0;word2[i]!='\0'; i++){
        printf("%c\n",word2[i]);
    }


    return 0;
}