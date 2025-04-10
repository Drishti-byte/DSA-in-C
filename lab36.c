/*program to implement priority queue*/
#include<stdio.h>
void enqueue(int q[],int *front,int *rear,int value)
{
    if(*rear == 9)
    printf("\nQueue is full");
    else if(*front == -1)
    {
        *front = *rear = 0;
        q[0] = value;
    }
    else 
    {
        int i;
        i = *rear;
        while(value < q[i] && i >= 0)
        {
            q[i + 1] = q[i];
            i = i - 1;
        }
        q[i + 1] = value;
        *rear = *rear + 1;
    }
}
void dequeue(int q[],int *front,int *rear)
{
    if(*front == -1)
    printf("\nQueue is empty");
    else 
    {
        printf("\nDeleted element is %d",q[*front]);
        if(*front == *rear)
        *front = *rear = -1;
        else 
        {
            for(int i = 0; i < *rear;i++)
            q[i] = q[i + 1];
            *rear = *rear - 1;
        }
    }
}
void display(int q[],int front,int rear)
{
    if(front == -1)
    printf("\nQueue is empty");
    else 
    {
        printf("\nThe elements are: ");
        for(int i = 0; i <= rear;i++)
        printf("\n%d",q[i]);
    }
}
int main()
{
    int q[10];
    int front = -1,rear = -1,num,ch;
    do
    {
        printf("\nDrishti Bansal");
        printf("\nPress 1 - Add an element");
        printf("\nPress 2 - Delete an element");
        printf("\nPress 3 - Display");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter a number: ");
            scanf("%d",&num);
            enqueue(q,&front,&rear,num);
            break;
            case 2:
            dequeue(q,&front,&rear);
            break;
            case 3:
            display(q,front,rear);
            break;
        }
    } while (ch != 4);
    return 0;
}