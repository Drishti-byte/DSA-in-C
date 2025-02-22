/*program to perform binary search*/
#include <stdio.h>
int binarySearch(int a[],int num,int size)
{
    int mid,i,st,end;
    st = 0, end = size - 1;
    while(st <= end)
    {
        mid = (st + end)/2;
        if(a[mid] == num)
        {
            return mid;
        }
        else if(num < a[mid])
        {
            end = mid - 1;
        }
        else 
        {
            st = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int a[6];
    int n,num;
    printf("Drishti Bansal");
    printf("\nHow many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(int i = 0; i < n;i++)
    {
        printf("\nEnter element %d:",i + 1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be searched:");
    scanf("%d",&num);
    int res = binarySearch(a,num,n);
    printf("\nElement found at %d",res);
    return 0;
}