#include<stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("Enter the First value : ");
    scanf("%d",&a);
    printf("Enter the Second value : ");
    scanf("%d",&b);
    printf("Enter the Third value : ");
    scanf("%d",&c);
    printf("Enter the Fourth value : ");
    scanf("%d",&d);
    printf("Enter the Fifth value : ");
    scanf("%d",&e);

    int avg = (a+b+c+d+e)/5;
    printf("Average = %d",avg);

    return 0;
}