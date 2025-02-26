/*program to create a matrix and perform addtion,subtraction,multiplication and transpose*/
#include<stdio.h>
void add(int a[10][10],int b[10][10],int r1,int c1)
{
    int i,j,c[10][10];
    for(i = 0; i < r1;i++)
    {
        printf("\n");
        for(j = 0; j < c1;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("\t%d",c[i][j]);
        }
    }
}
void subtract(int a[10][10],int b[10][10],int r1,int c1)
{
    int i,j,c[10][10];
    for(i = 0; i < r1;i++)
    {
        printf("\n");
        for(j=0; j < c1;j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("\t%d",c[i][j]);
        }
    }
}
void multiplication(int a[10][10],int b[10][10],int r1,int c2,int r2)
{
    int i,j,k,c[10][10];
    for(i = 0;i < r1;i++)
    {
        printf("\n");
        for(j = 0;j < c2;j++)
        {
            c[i][j] = 0;
            for(k = 0;k < r2;k++)
            c[i][j] = a[i][k] * b[k][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
void transpose(int a[10][10],int r,int c)
{
    int i,j;
    for(i = 0;i < c;i++)
    {
        printf("\n");
        for(j = 0;j < r;j++)
        {
            printf("\t%d",a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int r1,c1,r2,c2,a[10][10],b[10][10];
    printf("Drishti Bansal");
    printf("\nEnter the rows and columns of 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter the rows and columns of 2nd matrix:");
    scanf("%d %d",&r2,&c2);
    if(r2 == c1)
    {
        printf("\nEnter the elements of 1st matrix:");
        for(int i = 0;i < r1;i++)
        {
            for(int j = 0;j < c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter the elements of 2nd matrix:");
        for(int i = 0;i < r2;i++)
        {
            for(int j = 0;j < c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        int ch;
        printf("\nWhich operation would you like to perform:\n1-Add,2-Subtract,3-Multiply,4-Transpose");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: add(a,b,r1,c1);
            break;
            case 2: subtract(a,b,r1,c1);
            break;
            case 3: multiplication(a,b,r1,c2,r2);
            break;
            case 4: transpose(a,r1,c1);
            break;
            default:
            printf("\nInvalid option");
        }
    }
    else 
    printf("\nOperation not possible");
    return 0;
}