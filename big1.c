#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the number");
scanf("%d",&a);
if(a<0)
{
printf("positive");
}
else if(a>1)
{
printf("negative");
}
else
{
printf("zero");
}
getch();
}
