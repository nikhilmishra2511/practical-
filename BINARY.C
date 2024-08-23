#include<stdio.h>

// writer:- NIKHIL MISHRA
// Date:- 23/08/2024

int binary_search(int a[],int n,int x)
{
	int low=0,high=n-1,flag=1,mid;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(x<a[mid])
			high=mid-1;
		else if(x>a[mid])
			low=mid+1;
		else if(x==a[mid])
			return 0;
	}
	return flag;
}
void main()
{
	int i,j,val,a[5];
	for(i=0;i<5;i++)
	{

		printf("Enter Value %d ::",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter Search Value :: ");
	scanf("%d",&val);
	j=binary_search(a,5,val);
	if(j==0)
		printf("\n\t\tSuccessful Search");
	else
		printf("\n\t\tUnccessful Search");
}