#include <stdio.h>]
#include<conio.h>
void main()
{
    int y1, y2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    minMultiple = (y1>y2) ? y1 : y2;

   
    while(1)
    {
        if( minMultiple%y1==0 && minMultiple%y2==0 )
        {
            printf("The LCM of %d and %d is %d.", y1, y2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
