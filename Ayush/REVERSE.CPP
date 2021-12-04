#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev,rem;
clrscr();
printf("Enter any to reverse");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
rev=rem;
printf("%d",rev);
n=n/10;
}
getch();
}
