/*program to merge sorted arrays*/
#include<stdio.h>
void merge(int a[], int n, int b[], int m, int c[])
{
    int i,j,k;
    i = j = k = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else 
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if(i < n)
    {
        for(;i < n; i++,k++)
        c[k] = a[i];
    }
    else 
    {
        for(; j < m; j++,k++)
        c[k] = b[j];
    }
}
int main()
{
    int a[10],n,i,m,b[10],c[20];
    printf("Drishti Bansal");
    printf("\nHow many numbers are there in first array:");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("How many numbers are there in second array:");
    scanf("%d",&m);
    printf("\nEnter the numbers:");
    for(i=0; i < m;i++)
    {
        scanf("%d",&b[i]);
    }
    merge(a,n,b,m,c);
    printf("\nSorted numbers are:");
    for(i=0; i < n + m;i++)
    {
        printf("\t%d",c[i]);
    }
    return 0;
}