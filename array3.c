/*program to count the number of occurences of an element*/
#include<stdio.h>
int count(int a[],int n,int size)
{
    int c = 0,i;
    for(i=0; i < 9;i++)
    {
        if(n == a[i])
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int a[] = {12,23,34,45,65,23,12,90,76,81};
    int num,res;
    printf("Enter a number:");
    scanf("%d",&num);
    res = count(a,num,10);
    printf("\nThe number of occurences of %d is %d",num,res);
    return 0;
}