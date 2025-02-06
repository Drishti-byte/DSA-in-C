/*program to perform bubble sort*/
#include<stdio.h>
void bubbleSort(int arr[], int n)
{
    for(int i=0; i < n-1; i++)
    {
        for(int j=0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[10];
    int n;
    printf("How many numbers are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(int i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("\nThe sorted numbers are:");
    for(int i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}