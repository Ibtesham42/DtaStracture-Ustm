// bubble sort showing all intermediate steps using function.
#include<stdio.h>
void bubblesort(int a[],int size);
void main()
{
int a[50],n,i,j;
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("enter the elements of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
}
void bubblesort(int a[],int size)
{
int temp,i,j;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf(" the sorted array is:\n");
for(i=0;i<size;i++)
printf("%d\t",a[i]);
}


