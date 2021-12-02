#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count=0;
clrscr();
printf("The value between 1 to 100\n");
for(i=2;i<=100;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("%d\n",i);
count=0;
}
getch();
}
