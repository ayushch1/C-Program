#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
clrscr();
float sum(float,float);
printf("enter two number");
scanf("%f%f",&a,&b);
c=a+b;
printf("sum=%f",c);
getch();
}
float sum(float a,float b)
{
float x;
x=a+b;
return x;
}

