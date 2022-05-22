#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num,pos,a[50];
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter elements to be insert\n ");
    scanf("%d",&num);
    printf("Enter Position\n");
    scanf("%d",&pos);
    if(pos<0 || pos>n+1)
    {
        printf("\nInvalid Position");
    }
    else{
        for(i=n-1;i>=pos-1;i--)
        {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    printf("Elements inserted ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    }
}
