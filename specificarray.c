//writer :- NIKHIL MISHRA
//Date   :- 22/08/2024


#include <stdio.h>

void main()
{
    int a[5],i,n,f=0;
    printf("Enter 5 elements");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
      printf("enter specific array");
      scanf("%d",&n);
      for(i=0;i<=4;i++)
      {  
        if (a[i]==n)
        {
          f=1;
        }
      }

     if(f==1)
     {
     printf("Value found");
     }
    else{
        printf("Value not Found");
        }
}