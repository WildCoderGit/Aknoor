#include<stdio.h>

int main()
{
    int n;
    int add = 0;
    printf("Enter the length of array : ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for (int j = 1; j <= n; j++)
    {
        add += arr[j];        
    }
    printf("%d",add);
    
    

    return 0;
}