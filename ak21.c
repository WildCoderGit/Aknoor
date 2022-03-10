#include<stdio.h>

int main()
{
    int n;
    int coll = 0;
    printf("Enter the length of array : ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for (int j = 1; j <= n; j++)
    {
        if(arr[j]>coll)
        {
            coll = arr[j];
        }
    }
    printf("%d",coll);
    
    


    return 0;
}