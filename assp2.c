// wap to insert array at any position
#include<stdio.h>
int main()
{
	int a[50],size,i,num;
	printf("Enter the size of the array ");
	scanf("%d",&size);
	printf("Enter The elemnts ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter new value for the first position ");
	scanf("%d",&num);
	for(i+size-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=num;
	size++;
	printf("Elements after insertion ");
	for(i=0;i<size;i++)
	{
	printf("%d\t ",a[i]);
	}
	}
	
	
	
	
	
	
	
	
	

