/*program to print sum of matrices*/
#include<stdio.h>
void input(int a[][5], int r, int c)
{
    int i,j;
    printf("\nEnter the numbers:");
    for(i = 0; i < r;i++)
    {
        for(j = 0; j < c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void show(int a[][5],int r, int c)
{
    int i,j;
    printf("\nThe matrix is:\n");
    for(i = 0; i < r;i++)
    {
        for(j = 0; j < c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[5][5],b[5][5],s[5][5],i,j,r1,c1,r2,c2;
    printf("How many rows and columns are there in 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("How many rows and columns are there in 2nd matrix:");
    scanf("%d %d",&r2,&c2);
    if(r1 == r2 && c1 == c2)
    {
        input(a,r1,c1);
        input(b,r2,c2);
        for(i = 0; i < r1;i++)
        {
            for(j = 0; j < c1;j++)
            {
                s[i][j] = a[i][j] + b[i][j];
            }
        }
        show(a,r1,c1);
        show(b,r2,c2);
        show(s,r1,c1);
    }
    else 
    printf("\nAddition not possible");
    return 0;
}