/*program to search and delete the element in the array*/
#include<stdio.h>
int main()
{
    int a[10];
    int n,num,pos,i;
    printf("Drishti Bansal");
    printf("\nHow many elements are there in the array:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 0; i < n;i++)
    {
        printf("\nEnter element %d:",i + 1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element and the index you want to delete:");
    scanf("%d %d",&num,&pos);
    int count = 0;
    for(i = 0; i < n;i++)
    {
        if(num == a[i])
        {
            count++;
        }
    }
    if(count == 1)
    {
        printf("\nElement found");
    }
    else 
    {
        printf("\nElement not found");
    }
    for(i = pos; i < n - 1;i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nThe elements of the array are:");
    for(i = 0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}