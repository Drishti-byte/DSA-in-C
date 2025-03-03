/*program to implement insertion sort*/
#include <stdio.h>
int main()
{
    int a[10];
    int i,j,temp,n;
    printf("Drishti Bansal");
    printf("\nHow many elements are there in the array:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(i = 0;i < n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(j = 1;j < n;j++)
    {
        temp = a[j];
        i = j - 1;
        while(a[i] > temp && i > -1)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = temp;
    }
    printf("\nThe elements after sorting are:\n");
    for(i = 0;i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}