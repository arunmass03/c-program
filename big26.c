#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,j,count=0;
	scanf("%d %d",&a,&b);
	for(i=a+1;i<=b;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		{
			count++;
		}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
		count=0;
	}
	getch();
}
