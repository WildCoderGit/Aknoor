#include<stdio.h>

int swap(int a, int b)
{
    int temp = a;
    a = b; 
    b = temp;

    printf("%d <==> %d",a,b);



    return 0 ;
}


int main()
{
    int a,b;

    printf("Enter First value is : ");
    scanf("%d",&a);
    printf("Enter second value is : ");
    scanf("%d",&b);

    int out = swap(a,b);


    return 0;
}