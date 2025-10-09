// #include<stdio.h>

// int main()
// {

//     float firstAngel,secondAngel,ThirdAngel;

//     firstAngel = 65;

//     secondAngel = 45;

//     ThirdAngel = 180 - (firstAngel +secondAngel);

//     printf("Third angel: %.2f",ThirdAngel);

//     return 0;
// }


// #include<stdio.h>
// int main()
// {

//     float firstAngel,secondAngel,ThirdAngel;

//     printf("enter the first angle:\n");
//     scanf("%f",&firstAngel);

//     printf("enter the second angle:\n");
//     scanf("%f",&secondAngel);


//     ThirdAngel = 180 - (firstAngel + secondAngel);

//     printf("third angle:%.2f",ThirdAngel);

//     return 0;

// }


#include <stdio.h>

int main()
{
    float firstAngle, secondAngle, thirdAngle;

    printf("Enter the first angle:\n");
    scanf("%f", &firstAngle);

    printf("Enter the second angle:\n");
    scanf("%f", &secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("Third angle: %.2f", thirdAngle);

    return 0;
}
