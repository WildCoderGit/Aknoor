#include<stdio.h>

int main()
{
    int num;

    printf("Enter the Number : ");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("Negative number");
    }
    else if (num == 0)
    {
        printf("Number is 0");
    }
    else{
        printf("Positive Number");
    }
    
    

    return 0;
}