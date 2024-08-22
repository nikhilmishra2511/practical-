//writer :- NIKHIL MISHRA
//Date   :- 22/08/2024


void b_sort(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
 
 #include <stdio.h>
void main()
{
  int i,a[5];
  for(i=0;i<5;i++)
  {
    printf("Enter A:");
    scanf("%d",&a[i]);
  }

  b_sort(a,5);

   for(i=0;i<5;i++)
  {
    printf("%d\n",a[i]);
  }
}