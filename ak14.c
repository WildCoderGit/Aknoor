#include <stdio.h>

int main()
{
    int i;
    int value;
    int fab = 1;

    printf("Enter the value :");
    scanf("%d", &value);

    for (i = 1; i <= value; i++)
    {
        fab *= i;
        // printf("%d\n", fab);
    }
    printf("Factorial of %d is : %d\n", value,fab);

    return 0;
}