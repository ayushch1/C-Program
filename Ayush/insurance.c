#include<stdio.h>

int main()
{
    char gender,car;
    int insurance;
    printf("Enter insurance,gender,car");
    scanf("%d %c %c",&insurance,&gender,&car);
    if(gender=='M')
    printf("The person is insured");
    else
    {
        if(car=='M')
    {
        if(insurance>2000)
        printf("Person is insured");
        else
        printf("Person is not insured");
    }
    else
    {
        if(insurance>1000)
        printf("Person is insured");
        else
        printf("Person is not insured");
    }
    }
    getch();
}