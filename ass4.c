//wap to search an item in linear search
#include<stdio.h>
int main()
{
	int a[50],i,key,n;
	printf("Enter the number of items: ");
	scanf("%d",&n);
	printf("\nEnter The Items ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);

	}
	printf("Items are \n");
	for(i=0;i<n;i++)
	{
	printf("%d \t",a[i]);

	}
	printf("\nEnter the items to be searched ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key);
	
	{
	printf("\n%d is present in %d position ",key,i+1);
	break;
	}
	}
	if(i==n)
	{
	printf("Item is not present ");
	}
	
}
