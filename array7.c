/*program to use selection sort in ascending order*/
#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(int i=0; i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i < n-1; i++)
    {
        for(int j=i+1; j < n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAfter sorting the elements are:");
    for(int i=0; i < n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}