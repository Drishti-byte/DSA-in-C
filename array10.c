/*program to merge two arrays*/
#include <stdio.h>
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
    if(i < n) //Some elements from a[] has been left
    for(;i < n;i++,k++)
    {
        c[k] = a[i];
    }
    else //Elements are left from second array
    for(; j < m;j++,k++)
    {
        c[k] = b[j];
    }
}
int main()
{
    int a[5],b[5],c[10],n,m,i,j,k;
    printf("How many elements are there in first array:");
    scanf("%d",&n);
    printf("\nEnter the numbers in increasing order:");
    for(i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nHow many elements are there in second array:");
    scanf("%d",&m);
    printf("\nEnter the numbers in increasing order:");
    for(j=0; j < m;j++)
    {
        scanf("%d",&b[j]);
    }
    merge(a,n,b,m,c);
    printf("\nMerged numbers are:");
    for(k=0; k < n + m; k++)
    {
        printf("\t%d",c[k]);
    }
    return 0;
}