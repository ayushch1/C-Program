#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0,count=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
count=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(count==sum)
printf("armstrong number");
else
printf("not armstrong number");
getch();
}

