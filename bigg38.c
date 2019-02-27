#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
clrscr();
printf("enter the array size:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
printf("%d%d",a[i],i);
}
getch();
}
