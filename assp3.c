//wap insertion with specific position
#include<stdio.h>
int main()
{
	int a[50],i,size,pos,num;
	printf("Enter The Size Of An Array Elements ");
	scanf("%d, ",&size);
	printf("Emter The Elements in an array ");
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter New Elements ");
	scanf("%d",&num);
	printf("Enter The position ");
	scanf("%d",&pos);
	if(pos< 0 || pos> size +1)
	{
	printf("\nInvalid Position ");
	}
	else
	{
	for(i=size-1;i>=pos-1;i--)
	{
	a[i+1] = a[i];
	}
	a[pos-1]=num;
	size++;
	printf("Elements After Insertion \n");
	for(i=0;i<size;i++)
	{
	printf("%d\t",a[i]);
	}
	}
	
	
}
