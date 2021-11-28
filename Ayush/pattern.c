#include<stdio.h>

int main()
{
    int n;
    int i,j;
    printf("Enter the number of rows");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}