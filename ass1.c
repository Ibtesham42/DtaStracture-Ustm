//Write a program to find the largest and the smallest number within the list
#include<stdio.h>
void main()
{
    int a[100],i,n,lrg,sml;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    lrg=sml=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>lrg)
        lrg=a[i];
        if(a[i]<sml)
        sml=a[i];
    }
    printf("The largest element is %d",lrg);
    printf("\nThe smallest element is %d",sml);
}