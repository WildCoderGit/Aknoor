#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the First value : ");
    scanf("%d",&a);
    printf("Enter the Second value : ");
    scanf("%d",&b);
    printf("Enter the Third value : ");
    scanf("%d",&c);

    int add = a+b+c;
    printf("total = %d",add);

    return 0;
}