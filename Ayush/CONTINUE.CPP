#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=10;i++)
{
printf("%d\n",i);
if(i%5==0)
continue;
printf("Hello World\n");
}
getch();
}