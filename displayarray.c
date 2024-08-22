//writer :- NIKHIL MISHRA
//Date   :- 22/08/2024

#include <stdio.h>

void main()
{
    int a[5],i;
    printf("Enter 5 elements");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are:");
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
}