#include<stdio.h>
#include<conio.h>
void main()
{
	int p[2],q[2],r[2],i,flag=0;
	for(i=0;i<2;i++)
	{
	    scanf("%d",&p[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&q[i]);
	}
	for(i=0;i<2;i++)
	{
	    scanf("%d",&r[i]);
	}
	for(i=0;i<2;i++)
	{
	    if(p[i]==q[i] && q[i]==r[i])
	    {
	        flag=1;
	    }
	}
	if(flag==1)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	
}
