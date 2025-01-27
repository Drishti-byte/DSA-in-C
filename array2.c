/*program to perform binary search*/
#include<stdio.h>
int binarySearch(int a[],int num,int size)
{
    int start = 0, end = size - 1;
    while(start <= end)
    {
          int mid = (start + end)/2;
          if(a[mid] == num)
          {
               return mid;
          } 
          else if(num > a[mid])
          {
               start = mid + 1;
          }
          else if(num < a[mid])
          {
               end = mid - 1;
          }
     }
    return -1;
}
int main()
{
    int arr[] = {10,28,37,44,50,61,75,82,90,96};
    int num,p;
    printf("Enter the number to be searched:");
    scanf("%d",&num);
    p = binarySearch(arr,num,10);
    if(p == -1)
    printf("\nNumber not found");
    else 
    printf("\nFound at position %d",p);
    return 0;
}