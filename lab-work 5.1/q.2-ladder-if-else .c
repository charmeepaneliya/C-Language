#include<stdio.h>
int main()
{
    int a,b,c;

    printf("enter any number :\n");
    scanf("%d",&a);

    printf("enter any number :\n");
    scanf("%d",&b);

    printf("enter any number :\n");
    scanf("%d",&c);

    if(a<0){
        printf("your number is negative:%d\n",a);

    }else if(b<=0){
        printf("your number is naturl:%d\n",b);
    }else(c>0){
        printf("your number is positive:%d\n",c);
    }


    return 0;

}