/*program to delete a number from a given location in the array*/
#include<stdio.h>
int main()
{
    int a[7];
    int n,pos,i;
    printf("Drishti Bansal");
    printf("\nHow many elements are there in the array:");
    scanf("%d",&n);
    printf("\nEnter the number of elements in the array:");
    for(i = 0; i < n;i++)
    {
        printf("\nEnter element %d:",i + 1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the position of the number you want to delete:");
    scanf("%d",&pos);
    for(i = pos - 1; i < n - 1;i++)
    {
        a[i] = a[i + 1];
    }
    a[i] = 0;
    n--;
    printf("\nThe elements of the array are:");
    for(i = 0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}