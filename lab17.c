/*program to perform merge sort*/
#include <stdio.h>
void merge(int a[],int s1,int e1,int e2)
{
    int i,j,k,c[10];
    i = s1;
    j = e1 + 1;
    k = s1;
    while(i <= e1 && j <= e2)
    {
        if(a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else 
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    if(i <= e1)
    {
        for(;i <= e1;i++,k++)
        {
            c[k] = a[i];
        }
    }
    else
    {
        for(;j <= e2;j++,k++)
        {
            c[k] = a[j];
        }
    }
    for(k = s1;k <= e2;k++)
    {
        a[k] = c[k];
    }
}
void mergeSort(int a[],int beg,int end)
{
    int mid;
    if(beg == end)
    return;
    mid = (beg + end)/2;
    mergeSort(a,beg,mid);
    mergeSort(a,mid+1,end);
    merge(a,beg,mid,end);
}
int main()
{
    int a[5];
    int i,j,n;
    printf("Drishti Bansal");
    printf("\nHow many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:\n");
    for(i = 0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("\nAfter sorting elements are:\n");
    for(i = 0;i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}