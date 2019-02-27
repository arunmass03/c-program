#include<stdio.h>
#include<conio.h>
void main()
{
 int hr1,min1,hr2,min2,hr,min;
 printf("/n enter the first time");
 scanf("%d%d",&hr1,&min1);
 printf("/n enter the second time");
 scanf("%d%d",&hr2,&min2);
 hr=hr1-hr2;
 min=min1-min2;
 printf("/n the time is %d:%d",hr,min);
 getch();
} 
