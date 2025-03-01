/*program to implement sparse matrices using 3-tuple notation*/
#include<stdio.h>
int main()
{
    int row[10],col[10],value[10],i,j,r,c,n = 0,num;
    printf("Drishti Bansal");
    printf("\nHow many rows and columns are there:");
    scanf("%d %d",&r,&c);
    printf("\nEnter the elements of the array:");
    for(i = 0; i < r;i++)
    {
        for(j = 0; j < c;j++)
        {
            scanf("%d",&num);
            if(num != 0)
            {
                row[n] = i;
                col[n] = j;
                value[n] = num;
                n++;
            }
        }
    }
    printf("\nThe elements of the array are:\n");
    n = 0;
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c;j++)
        {
            if(i == row[n] && j == col[n])
            {
                printf("%d\t",value[n]);
                n++;
            }
            else 
            printf("0\t");
        }
        printf("\n");
    }
    return 0;
}