/*program to delete duplicate elements in the array*/
#include<stdio.h>
int main()
{
    int a[7];
    int n,num,i,j,k;
    printf("Drishti Bansal");
    printf("\nHow many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements in the array:");
    for(i = 0; i < n;i++)
    {
        printf("\nEnter element %d:",i + 1);
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n;i++)
    {
        for(j = i + 1; j < n;j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j;k < n;k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nThe array elements are:");
    for(i = 0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}