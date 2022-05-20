//wap binary search using function
#include<stdio.h>
int bsearch(int a[],int n, int low, int high);
int main()
{
	int a[50],i,key,result,n;
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter the element in sorte order  ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("The Numbers are\n ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nEnter the elements to be searched ");
	scanf("%d",&key);
	result=bsearch(a,key,0,n-1);
	if(result==-1)
	{
	printf("searched is unsucess ");
	}
	else
	{
	printf("Elements is found in position : %d " ,result +1);
	}
	
}
int bsearch(int a[],int n,int low,int high)
{
	int mid;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(a[mid]==n)
		{
		return mid;
		}
	}
	if(a[mid]<=n)
		{
		low=mid+1;
		}
	
	else
	{
	
	high=mid-1;


	}
	return -1;
}
	





















