#include<stdio.h>
#include<conio.h>
int main()
{
char p;
scanf("%c",&p);
if(((p>='a')&&(p<='z'))||((p>='A')&&(p<='Z')))
printf("alphabet");
else 
printf("character");
}
