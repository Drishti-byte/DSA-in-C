/*program to insert an element in the array at a given position*/
#include<stdio.h>
int main()
{
    int a[7];
    int i,pos,n,num;
    printf("Drishti Bansal");
    printf("\nHow many elements are there in the array:");
    scanf("%d",&n);
    printf("\nEnter the elements in the array:");
    for(i = 0; i < n;i++)
    {
        printf("\nEnter element no %d:",i + 1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number and position that you want to insert:");
    scanf("%d %d",&num,&pos);
    for(i = n;i >= pos;i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;
    n++;
    printf("\nThe elements of the array are:");
    for(i = 0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}