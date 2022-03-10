#include<stdio.h>

int main()
{
    int num;

    printf("Enter the value : ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("%d in Even Number",num);
    }
    else{
        printf("%d is Odd Number",num);
    }
    

    return 0;
}