#include<stdio.h>

int main(){
    int a,b;
    char op;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    printf("Enter the operator");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        printf("%d\n",a/b);
        break;
        default:
        printf("%d\n invalid input");
    }
    getch();
}