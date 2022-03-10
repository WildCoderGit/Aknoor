#include<stdio.h>
#include<string.h>

struct school
{
    char name[50];
    int rollnumber;
    int class;
};
// strcpy(c.name,"sahil");


int main()
{
    int n;
    printf("Enter the no. of Student : ");
    scanf("%d",&n);
    struct school c[n];
    

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the name of student[%d] : ",i);
        scanf("%s",&c[i].name);
        printf("Enter the Roll no. of student[%d] : ",i);
        scanf("%d",&c[i].rollnumber);
        printf("Enter the class of student[%d] : ",i);
        scanf("%d",&c[i].class);
    }

    printf("------------------------------STUDENT DATA------------------------------\n");
    for (int j = 1; j <= n; j++)
    {
        printf("Name of student[%d] : %s \n",j,c[j].name);
        printf("Roll no. of student[%d] : %d \n",j,c[j].rollnumber);
        printf("Class of student[%d] : %d \n",j,c[j].class);
        printf("\n\n");
    }


    
    


    return 0;
}