/*program to create two arrays and display them*/
#include<stdio.h>
int main()
{
    int a[10]= {1,8,4,0,2,6,7,1,6,3};
    float arr[5];
    printf("Drishti Bansal");
    printf("\nInteger Array");
    int i;
    for(i=0; i <= 10;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nFloating array");
    printf("\nEnter the values of the array:");
    for(i=0; i < 5;i++)
    {
        printf("\nElement no %d:",i+1);
        scanf("%f",&arr[i]);
    }
    printf("The values of floating array:");
    for(i=0; i < 5;i++)
    {
        printf("\t%1f",arr[i]);
    }
    return 0;
}