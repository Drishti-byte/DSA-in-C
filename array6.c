/*program to find the sum of all the elements in the array*/
#include<stdio.h>
int sum(int arr[])
{
    int sum = 0,i;
    for(i=0; i < 10;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int res;
    int a[] = {10,29,34,49,32,90,78,60,81,59};
    res = sum(a);
    printf("The sum of all the elements in the array is %d",res);
    return 0;
}