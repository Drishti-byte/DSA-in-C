/*program to display and search a specific element in the linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}List;
List *start;
void addAtEnd(int value)
{
    List *ptr,*temp;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    temp->next = NULL;
    if(start == NULL)
    start = temp;
    else 
    {
        ptr = start;
        while(ptr->next != NULL)
        ptr = ptr->next;
        ptr->next = temp;
    }
}
void search(int num)
{
    List *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->data == num)
        {
            printf("\nFound");
            break;
        }
        else 
        ptr = ptr->next;
    }
    if(ptr == NULL)
    printf("\nNot found");
}
void display()
{
    List *ptr;
    ptr = start;
    printf("\nThe elements of the list are:");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int num,i,n,val;
    start = NULL;
    printf("Drishti Bansal");
    printf("\nHow many nodes are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d:",i);
        scanf("%d",&num);
        addAtEnd(num);
    }
    display();
    printf("\nEnter the number you want to search:");
    scanf("%d",&val);
    search(val);
    return 0;
}