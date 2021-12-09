#include<stdio.h>
#include<conio.h>
void main();
{
int n,x;
int is_even(int);
printf("enter number");
scanf("%d",&n);
x=is_even(n);
if(x==1)
printf(:"no is even",n);
else
printf("no is odd",n);
return 0;
}
int is_even(int n)
{
if(n%2==0)
return 1;
else
return 0;
}