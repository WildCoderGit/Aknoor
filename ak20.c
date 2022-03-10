#include<stdio.h>

int main()
{
    int n; 
    int p;

    printf("Enter the Length of array : ");
    scanf("%d",&n);
    printf("Enter the Length of array : ");
    scanf("%d",&p);

    int arr[n][p];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
        printf("Enter the value of array[%d][%d] : ",i,j);
        scanf("%d",&arr[i][j]);
        }
        
    }

    printf("2-D Array output : \n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            printf("[%d]\n",arr[i][j]);
        }
    }

    


    return 0;
}