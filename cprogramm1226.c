#include <stdio.h>
#include<conio.h>
void main() 
{
    int n,a[10],temp=0,p,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(p=i+1;p<n;p++)
       {
           if(a[i]>a[p])
           {
               temp=a[i];
               a[i]=a[p];
               a[p]=temp;
           }
       }
    }
   
     if(n%2==0)
     {
         printf("%d\n",(a[n/2]+a[(n/2)-1])/2);
     }
     else
     {
         printf("%d\n",a[(n-1)/2]);
     }
	return 0;
}
