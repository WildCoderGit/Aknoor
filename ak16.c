#include<stdio.h>

int main()
{
    int table;
    int i;

    printf("Enter table number: ");
    scanf("%d",&table);

    printf("\n\n");
    printf("--------------------------Table of %d --------------------------\n\n",table);

    for(i=1;i<11;i++){
        printf("\t\t\t%d  X  %d  =  %d\n",table,i,i*table);
    }


    return 0;
}    