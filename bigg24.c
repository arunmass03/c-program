#include<stdio.h>
#include<conio.h>
void main() 
 {
 int a,b;
 printf("Enter the range:");
 scanf("%d%d",&a,&b);
 for(int i=a+1;i<b;i++)
 {
 	if(i%2!=0)
 	printf("%d\n",i);
 }
	getch();
}
