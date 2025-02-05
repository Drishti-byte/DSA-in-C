/*program to perform selection sort in descending order*/
#include<stdio.h>
void selectionSort(int arr[], int n)
{
    for(int i=0; i < n-1;i++)
    {
        for(int j=i+1; j < n;j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    printf("\nEnter the numbers:");
    for(int i=0; i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionSort(a,n);
    printf("\nThe sorted numbers are:");
    for(int i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}