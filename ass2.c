//write aprogram to find the transpose of a matrix using defined argument
#include<stdio.h>
void transpose();
void main()
{
    transpose();
    transpose();
}
void transpose()
{
    int a[50][50],i,j,r,c;
    printf("enter the size of the matrix :");
    scanf("%d%d",&r,&c);
    printf("Enter the values :");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Displaying the values :\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose a matrix :\n");
    for(j=1;j<=c;j++)
    {
        for(i=1;i<=r;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");  
    }
}