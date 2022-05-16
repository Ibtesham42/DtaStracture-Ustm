//wap to search multiple accurance in an array
#include<stdio.h>
int main()
{
	int a[50],i,key,count,n;
	printf("Enter the number of items ");
	scanf("%d",&n);
	printf("\nEnter the items  ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nItems are ");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	
	}
	printf("\nEnter items to be searched ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	
	if(a[i]==key)
	
		{
		printf("\n %d is present in %d 's position ",key,i+1);
		count++;
		}
	}
	if(count==0);
	{
	printf("\nItem is not present ");
	}

	

}
