#include<stdio.h>

int add(int a ,int b)
{
    int sum = a+b;

    return sum;
}



int main()
{
    int a,b;
    printf("Enter your number : ");
    scanf("%d",&a);
    printf("Enter your number : ");
    scanf("%d",&b);
    int total = add(a,b);
    printf("%d",total);

    return 0;
}