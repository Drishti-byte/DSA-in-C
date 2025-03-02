/*program to implement selection sort*/
#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    printf("Drishti Bansal");
    printf("\nHow many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n - 1;i++)
    {
        for(j = i+1; j < n;j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting the elements are:");
    for(i = 0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}