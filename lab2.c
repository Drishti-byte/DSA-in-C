/*program to find the occurences in the array*/
#include<stdio.h>
int main()
{
    int a[10] = {10,24,83,49,58,61,61,83,94,99};
    int i,tar;
    printf("Drishti Bansal");
    printf("\nEnter the element you want to search:");
    scanf("%d",&tar);
    printf("\nFirst occurence of the array:");
    for(i=0; i <= 10;i++)
    {
        if(tar == a[i])
        {
            printf("\nFound at position %d",i);
            break;
        }
    }
    printf("\nAll occurences of the array");
    for(i=0; i <= 10;i++)
    {
        if(tar == a[i])
        {
            printf("\nFound at position %d",i);
        }
    }
    return 0;
}