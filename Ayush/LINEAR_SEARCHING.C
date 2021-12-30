#include<stdio.h>
#include<conio.h>
int main()
{
int a[10]={3,2,5,6,8,7,9,10,11,1};
int item,i,loc;
int search (int[],int,int);
printf("Enter item");
scanf("%d",&item);
loc=search(a,item,10);
if(loc==-1)
printf("Element not found");
else
printf("%d format at %d index",item,loc);
getch();
}
int search(int [],int,item,int size);
{
int i;
for(i=0;i<size;i++)
{
if(a[i]==item)
return i;
}
if(i==size)
return -1;
}
