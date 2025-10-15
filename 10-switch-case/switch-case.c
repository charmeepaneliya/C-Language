#include<stdio.h>
int main()
{
    int month;

    printf("enter the month\n");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        printf("your month january");
        break;

        case 2:
        printf("your month february");
        break;

        case 3:
        printf("your month march");
        break;

        case 4:
        printf("your month April");
        break;

        case 5:
        printf("your month May");
        break;

        case 6:
        printf("your month jun");
        break;

        case 7:
        printf("your month july");
        break;

        case 8:
        printf("your month august");
        break;

        case 9:
        printf("your month september");
        break;

        case 10:
        printf("your month oct");
        break;

        case 11:
        printf("your month november");
        break;

        case 12:
        printf("your month dce");
        break;

        default:
        printf("invalid choice ");

       
    }
    return 0;
}