/*Program to read and display upper,lower and tri-diagonal matrices*/
#include<stdio.h>
void upper(int a[10][10],int r,int c)
{
    int i,j;
    printf("\nUpper triangular matrix:");
    for(i = 0; i < r;i++)
    {
        printf("\n");
        for(j = 0; j < i;j++)
        {
            printf("\t");
        }
        for(j = i;j < c;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
}
void lower(int a[10][10],int r,int c)
{
    int i,j;
    printf("\nLower triangular matrix:");
    for(i = 0; i < r;i++)
    {
        printf("\n");
        for(j = 0;j <= i;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
}
int main()
{
    int a[10][10],r,c;
    printf("Drishti Bansal");
    printf("\nEnter the rows and columns of the matrix:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the elements of the matrix:");
    for(int i = 0; i < r;i++)
    {
        for(int j = 0; j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    upper(a,r,c);
    lower(a,r,c);
    return 0;
}