//Wap for selection sort showing all intermediate steps
#include<stdio.h>
void main()
{
int a[50],i,j,temp,n,k;
printf("Enter the no of elements :");
scanf("%d",&n);
printf("Enter the elements :");
for (i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("The elements are:\n");
for (i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}

for (i=0;i<n-1;i++)
{ 
	printf("\n Iteration=%d\n",i+1 );
	for (j=i+1;j<n;j++)
	{
	   if(a[i]>a[j])
	   {
	     temp=a[i];
	     a[i]=a[j];	
	     a[j]=temp;
	   }
	for(k=0;k<n;k++)
        printf("%d\t",a[k]);
        printf("\n");
}
}
	printf("\nThe sorted array are :");
	for (i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}



