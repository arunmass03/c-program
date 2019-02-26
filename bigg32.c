#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a[n],i,max=a[0];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++)
  {
      if(a[i]>max)
      {
          max=a[i];
      }
    }
 printf("%d",max);
 getch();
}
