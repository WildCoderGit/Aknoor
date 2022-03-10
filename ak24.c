#include<stdio.h>

int main()
{
    int m;
    printf("Enter the length of array : ");
    scanf("%d",&m);
    int n;
    printf("Enter the length of array : ");
    scanf("%d",&n);

    int arr1[m][n];
    int arr2[m][n];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("Enter the value of arr1[%d][%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("Enter the value of arr2[%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
        
    }
    
    int product[m][n];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            product[i][j] = arr1[i][j] * arr2[i][j];
        }
        
    }
    printf("Product of Two matrix \n");
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d  ", product[i][j]);
        }
        printf("\n");
    }
    


    
    


    return 0;
}