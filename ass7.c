//bubble sort using function//
#include<stdio.h>
void bsort(int ar[],int size);
void main()
{
	int a[50],n,i;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	bsort(a,n);
}

void bsort(int ar[],int size)
{
	int i,j,temp,k;
	printf("\nThe steps:\n");
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
	{
		if(ar[j]>ar[j+1])
		{
			temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
		}
		for(k=0;k<size;k++)
		printf("%d\t",ar[k]);
		printf("\n");	
	}
	printf("\n");
	printf("iteratios:\n");
	}
for(i=0;i<size;i++)
printf("%d\t",ar[i]);
}
