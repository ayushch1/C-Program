#include<stdio.h>
#include<conio.h>
void bubblesort(int a[],int n)
{
int pass,j,temp;
for(pass=1;pass<=n-1;pass++)
{
for(j=0;j<n-pass;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(j=0;j<n;j++)
{
printf("%d",a[j]);
}
}
void main()
{
int a[5]={5,3,1,4,2};
clrscr();
fflush(stdin);
bubblesort(a,5);
getch();
}