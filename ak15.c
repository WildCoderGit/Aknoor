#include<stdio.h>

int fibonacci(int n);

int main()
{   
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("fibonacci seris is %d",fibonacci(n));

    return 0;
}

int fibonacci(int n){
    int result=1;
    // printf("%d\n",n);
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        result *=i;
        
    }
    


    return result;
}