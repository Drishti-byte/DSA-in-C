/*program to perform linear search*/
#include<stdio.h>
int linearSearch(int a[], int num, int n)
{
    int i;
    for(i=0; i < 10; i++)
    {
        if(a[i] < num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int num,p;
    int a[] = {45,85,96,36,21,78,10,56,69,77};
    printf("Enter a number:");
    scanf("%d",&num);
    p = linearSearch(a,num, 10);
    if(p == -1)
    printf("\nThe number is not there");
    else 
    printf("\nNumber is found at position %d",p);
    return 0;
}