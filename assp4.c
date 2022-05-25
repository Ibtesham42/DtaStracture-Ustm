//wap Array Deletion
#include<stdio.h>
int main()
{
	int a[50],i,size,pos,item;
	printf("Enter Size of the elements ");
	scanf("%d",&size);
	printf("Enter Elements ");
	for(i=0;i<size;i++)
	{
	scanf("%d",a[i]);
	}
	printf("Enter Position ");
	scanf("%d",&pos);
	if(pos<0||pos>size)
	{
	printf("\nInvalid Position ");
	}
	else
	{
	item=a[pos-1];
	for(i=pos-1;i<size-1;i++)
	{
	a[i]=a[i+1];
	}
	size--;
	printf("\nAfter Deletion Elements\n");
	for(i=0;i<size;i++)
	{
	printf("%d\t",a[i]);
	}
	}
}
