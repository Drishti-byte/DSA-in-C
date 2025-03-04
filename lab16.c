/*program to perform bubble sort*/
#include <stdio.h>
int main()
{
    int a[5];
    int i,j,n;
    printf("Drishti Bansal");
    printf("\nHow many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 0;i < n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nThe elements are:\n");
    for(i = 0;i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}