//wap travere the array elements
#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("Enter The Size ");
	scanf("%d",&n);
	printf("Enter The ELements ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	
	
	
	printf("Elements present inside array :");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}
