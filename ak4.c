#include<stdio.h>

int main()
{ 
    int a,b,c;
    printf("Enter First value : ");
    scanf("%d",&a);
    printf("Enter Second value : ");
    scanf("%d",&b);
    printf("Enter Third value : ");
    scanf("%d",&c);

    int product = a*b*c;

    printf("Product = %d",product);

    return 0;
}