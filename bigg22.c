#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp,num=0;
printf("enter a number");
scanf("%d",&a);
temp=a;
while(a!=0)
{
  b=a%10;
  num=(num*10)+b;
  a=a/10;
}
if(temp==num)
{
  printf("palindrome");
}
else
{
  printf("not a palindrome");
}
getch();
}

