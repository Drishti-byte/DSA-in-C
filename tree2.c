/*program to sort an array using heap sort*/
#include<stdio.h>
void heapify(int a[],int pos)
{
    int parent,temp;
    while(pos != 1)
    {
        parent = pos/2;
        if(a[pos] > a[parent])
        {
            swap(a,pos,parent);
            pos = parent;
        }
        else 
        break;
    }
}
void heapsort(int a[],int n)
{
    if(n == 1)
    return;
    swap(a,1,n);
    reheapify(a,n-1);
    heapsort(a,n-1);
}
void reheapify(int a[],int n)
{
    int parent,left,right,temp;
    parent = 1;
    while(1)
    {
        left = parent * 2;
        right = left + 1;
        if(a[left] >= a[parent] && a[right] >= a[parent] && left <= n && right <= n)
        {
            if(a[left] > a[right])
            {
                swap(a,left,parent);
                parent = left;
            }
            else 
            {
                swap(a,right,parent);
                parent = right;
            }
        }
        else if(a[left] > a[parent] && left <= n)
        {
            swap(a,left,parent);
            parent = left;
        }
        else if(a[right] > a[parent] && right <= n)
        {
            swap(a,right,parent);
            parent = right;
        }
        else 
        break;
    }
}
void display(int a[],int n)
{
    printf("\nThe array elements are: ");
    for(int i = 1;i <= n;i++)
    {
        printf("\n%d",a[i]);
    }
}
void swap(int a[],int x,int y)
{
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int main()
{
    int n,a[20],i;
    printf("How many numbers are there: ");
    scanf("%d",&n);
    printf("\nEnter the numbers");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter number %d: ",i);
        scanf("%d",&a[i]);
        heapify(a,i);
    }
    display(a,n);
    heapsort(a,n);
    display(a,n);
    return 0;
}