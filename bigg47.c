#include<stdio.h>
#include<conio.h
int main()
{
    int temp,n1,n2;
    scanf("%d %d",&n1,&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("%d %d",n1,n2);
    return 0;
}
