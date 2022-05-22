#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[50],pos,item;
    printf("Enter The Array Size\n");
    scanf("%d",&n);
    printf("Enter Elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("your elements are \n");
    for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    printf("\nEnter the position you want to delelte data\n");
    scanf("%d",&pos);
    if(pos<=0 || pos>n)
    {
        printf("Invalid position");
    }
    else{
        item=a[pos-1];
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
    printf("\nUpdated array after deletion\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nYour Deleted item is %d ",item);
}
