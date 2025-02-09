/*program to perform merge sort*/
#include<stdio.h>
void merge(int a[], int s1, int e1, int e2)
{
    int i,j,k,c[50];
    i = s1;
    j = e1 + 1;
    k = s1;
    while(i <= e1 && j <= e2)
    {
        if(a[i] < a[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else 
        {
            c[k] = a[j];
            j++;
            k++;
        }
    }
    if(i <= e1)
    {
        for(; i <= e1; i++,k++)
        {
            c[k] = a[i];
        }
    }
    else 
    {
        for(; j <= e2;j++,k++)
        {
            c[k] = a[j];
        }
    }
    //Putting the values of array c to array a 
    for(k = s1; k <= e2;k++)
    {
        a[k] = c[k];
    }
}
void mergeSort(int a[], int beg, int end)
{
    if(beg == end)
    return;
    int mid; 
    mid = (beg + end) / 2;
    mergeSort(a,beg,mid);
    mergeSort(a,mid+1,end);
    merge(a,beg,mid,end);
}
int main()
{
    int a[20],n,i;
    printf("How many numbers are there:");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("\nSorted elements are:");
    for(i=0; i < n;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}