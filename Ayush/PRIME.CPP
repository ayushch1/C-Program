#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=37;
clrscr();
for(i=2;i<=n/2+1;i++)
{
if(n%i==0)
{
printf("no is not a prime");
break;
}
if(i==n/2+1)
{
printf("no is prime");
}
}
getch();
}