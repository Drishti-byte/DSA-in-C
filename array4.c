/*program to return the smallest value in an array*/
#include<stdio.h>
int smallest(int a[])
{
    int min = 100;
    int i;
    for(i=0; i < 9;i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int res;
    int a[] = {12,23,36,49,52,64,73,85,90,32};
    res = smallest(a);
    printf("The lowest number in the array is %d",res);
    return 0;
}