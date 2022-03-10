#include<stdio.h>

int main()
{
    int r;
    float pie = 3.14;

    printf("Enter The Radius of Circle : ");
    scanf("%d",&r);

    float circle = pie*(r*r);

    printf("Area of Circle is : %f",circle);

    return 0;
}