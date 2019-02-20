#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,num,i,c,temp;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
     num=0,c=0;
     temp=i ;
        while(temp!=0)
        {
           c=temp%10;
           num=num+(c*c*c);
           temp=temp/10;
        }
        if(i==num)
           printf("%d ",num);
     }
}
