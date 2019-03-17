#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int n,temp,i,j;
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1,j=0;i>n/2,j<n/2;i--,j++)
	{
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	}
	printf("%s",a);
}
