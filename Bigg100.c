#include<stdio.h>
#include<conio.h>
void main()
{
    int a,res=1,rem=0;
    scanf("%d",&n);
    while(a!='\0')
    {
        rem=a%10;
        res=res*rem;
        n=a/10;
    }
    printf("%d",res);
}
