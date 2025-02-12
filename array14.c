/*program to perform insertion sort*/
#include<stdio.h>
int main()
{
    int a[10],n,i,j,num,pos;
    printf("How many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 0; i < n;i++)
    {
        printf("\nEnter element %d:",i + 1);
        scanf("%d",&a[i]);
    }
    int temp;
    for(int j = 1;j < n;j++)
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
    printf("\nAfter sorting the elements are:\n");
    for(i = 0; i < n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
    return 0;
}