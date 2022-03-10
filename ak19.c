#include<stdio.h>

int main()
{
    int n; 

    printf("Enter the Length of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value of array[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Array output : ");

    for (int i = 1; i <= n; i++)
    {
        printf("[%d]",arr[i]);
    }

    


    return 0;
}