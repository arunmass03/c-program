#include <stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ 
    char p[100];
	int n,l,i,count=0;
	scanf("%s",p);
	scanf("%d",&l);
	n=strlen(p);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",p[i]);
	    count++;
	    if(l==count)
	    {
	        break;
	    }
	    
	}
	return 0;
}
