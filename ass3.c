//write a program to find the addition of diagonals elements
#include<stdio.h>
int diagadd(int row,int col);
void main()
{
    int sum=0,r,c;
    printf("Enter the size of rows and columns :");
    scanf("%d%d",&r,&c);
    sum=diagadd(r,c);
    printf("\nSum of diagonals : %d\n",sum);
}
int diagadd(int row,int col)
{
    int s=0,i,j,a[50][50];
    printf("Enter the elements :");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Displaying the value\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==j)
            s+=a[i][j];
        }
    }
    return(s);
}