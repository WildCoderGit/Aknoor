#include<stdio.h>

int main()
{
    int length , breath;
    printf("Enter the value of length : ");
    scanf("%d",&length);
    printf("Enter the value of breath : ");
    scanf("%d",&breath);

    int area = length*breath;

    printf("Area of Rectangle is : %d",area);


    return 0;
}