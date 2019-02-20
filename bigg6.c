#include<stdio.h>
#include<conio.h>
void main()
{
    int p;
    printf("Enter the year");
    scanf("%d",&p);
    if(p%4==0)
    {
        printf("Its leap year");
    }
    else
    {
        printf("Its not a leap year");
    }
    getch();
}
