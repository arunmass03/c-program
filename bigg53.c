#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
	char a[10],b[10];
	int n,n1,i,j;
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	n1=strlen(b);
	for(i=0;i<n1;i++)
	{
	    a[n]=b[i];
	    n++;
	}
    	printf("%s",a);
   	getch();
}
