#include<stdio.h>
#include<string.h>

int main(){

    char word1[]="hello good morning";

    char copyString[sizeof(word1)];

    strcpy(copyString,word1);

    printf("copyString: %s",copyString);

    return 0;
}