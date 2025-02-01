/*program to return highest value in the array*/
#include<stdio.h>
int highest(int a[])
{
    int max = 0;
    int i;
    for(i=0; i < 9;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int a[] = {10,23,56,89,9,45,78,95,39,63};
    int res;
    res = highest(a);
    printf("The highest value in the array is %d",res);
    return 0;
}