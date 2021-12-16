#include<stdio.h>

int main(){
    float a,b;
    char op;
    printf("Enter the first number");
    scanf("%f",&a);
    printf("Enter the second number");
    scanf("%f",&b);
    fflush(stdin);
    printf("Enter the operator");
    scanf("\n%c",&op);
    switch(op)
    {
        case '+':
        printf("%f\n",a+b);
        break;
        case '-':
        printf("%f\n",a-b);
        break;
        case '*':
        printf("%f\n",a*b);
        break;
        case '/':
        printf("%f\n",a/b);
        break;
        default:
        printf("\n invalid input");
    }
    getch();
}
