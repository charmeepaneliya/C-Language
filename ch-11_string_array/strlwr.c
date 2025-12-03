#include<stdio.h>
#include<ctype.h>

int main(){

    char word1[]="WORD";

    char lowerCase[sizeof(word1)];

    int  i;

    for(i=0;word1[i]!='\0';i++){
        lowerCase[i]=tolower(word1[i]);
    }

    lowerCase[i] = '\0';

    printf("%s",lowerCase);

    return 0;
}