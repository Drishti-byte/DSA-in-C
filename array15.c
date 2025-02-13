/*program to print tridiagonal matrix*/
#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,r,c;
    printf("How many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the rows and columns of the matrix:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the elements of the array:");
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nTri-diagonal matrix:\n");
    for(i = j;i < n;i++)
    {
        printf("%d",a[i][j]);
    }
    for(i = j + 1;i < n - 1;i++)
    {
        printf("%d",a[i][j]);
    }
    for(i = j - 1;i < n - 1;i++)
    {
        printf("%d",a[i][j]);
    }
    return 0;
}