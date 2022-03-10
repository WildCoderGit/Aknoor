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

    if (a>b && a>c)
    {
        printf("Greater value is : %d",a);
    }
    else if (b>c)
    {
        printf("Greater value is : %d",b);
    }
    else
    {
        printf("Greater value is : %d",c);
    }

    
    


    return 0;
}