#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=1,i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		sum=sum*a;
	}
	printf("%d",sum);
	getch();
}
