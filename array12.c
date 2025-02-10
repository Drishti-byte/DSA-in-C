/*program to input and print the matrix*/
#include<stdio.h>
void input(int a[][10],int r,int c)
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
void show(int a[][10],int r, int c)
{
    int i,j;
    printf("\nEntered matrix is:\n");
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
    int a[5][5];
    int r,c;
    printf("How many rows and columns are there:");
    scanf("%d %d",&r,&c);
    input(a,r,c);
    show(a,r,c);
    return 0;
}