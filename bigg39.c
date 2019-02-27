#include<stdio.h>
#include<conio.h>
int main(void)
{
    int n,h,m;
    scanf("%d",&n);
    if(n<60)
    {
    	printf("%d",n);
    }
    if(n>60)
    {
    h=n/60;
    m=n%60;
    printf("%d\t%d",h,m);
    }
	return 0;
  }
