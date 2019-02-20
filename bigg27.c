#include<stdio.h>
#include<conio.h>
void main() 
{
	int a,sum=0,num,n;
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
	a=num%10;
	sum=sum+(a*a*a);
	num=num/10;
	}
	if(sum==n)
	printf("yes");
	else
	printf("no");
	getch();
}
