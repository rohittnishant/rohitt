include<stdio.h>
#include<conio.c>
int main()
{
int a[70],i,n,min;
printf("enter the range");
scanf("%d",&n);
printf("enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>min)
{
min=a[i];
}
}
printf("%d",min);
}
