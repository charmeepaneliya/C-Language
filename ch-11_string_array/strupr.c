#include<stdio.h>
#include<ctype.h>

int main(){

    char word1[]="hello";

    char upperCase[sizeof(word1)];

    int i;

    for(i=0;word1[i]!='\0';i++){
        upperCase[i]= toupper(word1[i]);
    }

    upperCase[i] ='\0';

    printf("%s",upperCase);

    return 0;

}