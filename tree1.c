/*program to implement heap sort and min and max heap*/
#include<stdio.h>
void maxheap(int a[],int pos)
{
    int temp,parent;
    while(pos != 1)
    {
        parent = pos/2;
        if(a[pos] > a[parent])
        {
            temp = a[pos];
            a[pos] = a[parent];
            a[parent] = temp;
            pos = parent;
        }
        else 
        break;
    }
}
void minheap(int a[],int pos)
{
    int temp,parent;
    while(pos != 1)
    {
        parent = pos/2;
        if(a[pos] < a[parent])
        {
            temp = a[pos];
            a[pos] = a[parent];
            a[parent] = temp;
            pos = parent;
        }
        else 
        break;
    }
}
void display(int a[],int n)
{
    printf("\nThe elements of array are: ");
    for(int i = 1; i <= n;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int a[10];
    int n,i;
    printf("How many elements are there in the binary tree: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d: ",i);
        scanf("%d",&a[i]);
        maxheap(a,i);
    }
    display(a,n);
    minheap(a,i);
    display(a,n);
    return 0;
}