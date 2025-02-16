/*program to find the minimum, maximum, sum and average of elements in the array*/
#include<stdio.h>
int minimum(int arr[], int size)
{
    int min = 100,i;
    for(i=0; i <= 10; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int maximum(int a[], int size)
{
    int max = 0; 
    for(int i=0; i < 10;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int sum_and_average(int a[],int size)
{
    int sum = 0,average; 
    for(int i=0; i < 10; i++)
    {
        sum += a[i];
    }
    average = sum / 10;
    printf("\nAverage is %d",average);
    return sum;
}
int main()
{
    int a[10] = {12, 15, 17, 19, 34, 67, 89, 90, 91, 95};
    printf("Drishti Bansal");
    int res = minimum(a,10);
    printf("\nMinimum element in the array is %d",res);
    int r = maximum(a,10);
    printf("\nMaximum element in the array is %d",r);
    int re = sum_and_average(a,10);
    printf("\nSum of the elements in the array is %d",re);
    return 0;
}