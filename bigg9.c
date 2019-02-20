#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0;
scanf("%d",&n);
while(n>0)
{
sum=sum+n;
n--;
}
printf("%d",sum);
getch();
}
