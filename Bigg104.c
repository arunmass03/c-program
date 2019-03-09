#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,i,a[10];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("%d",a[k-1]);
}
