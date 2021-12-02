#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter a number");
scanf("%d\n",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
printf("no is not a prime");
break;
}
if(i==n/2)
{
printf("no is prime");
}
}
getch();
}