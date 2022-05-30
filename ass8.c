//wap program for selection sort showing all the intermediate steps
#include<stdio.h>
int main()
{
	int a[50],i,j,temp,n;
	printf("Enter no of elements ");
	scanf("%d",&n);
	printf("Enter Elements ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("The elements are : ");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
	if(a[i]<a[j])
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	}
	}
	
	}
	printf("\nThe shorted aray is ");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
	
}
