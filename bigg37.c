#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
char a[100];
int flag,l;
scanf("%s",&a);
l=strlen(a);
for(int i=0;i<l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
    flag=1;
}
else
{
   flag=0;
}
}
if(flag==1)
{
    printf("YES");
}
else
{
    printf("NO");
}
}
