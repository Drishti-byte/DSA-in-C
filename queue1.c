/*program to implement priority queue*/
#include<stdio.h>
void enqueue(int q[],int *front,int *rear,int value)
{
    if(*front == -1)
    {
        *front = *rear = 0;
        q[0] = value;
    }
    else if(*rear == 9)
    printf("\nQueue is full");
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
            int i;
            for(i = 0;i < *rear;i++)
            q[i] = q[i + 1];
            *rear = *rear - 1;
        }
    }
}
void display(int q[],int front,int rear)
{
    printf("\nQueue is: ");
    if(front == -1)
    printf("\nQueue is empty");
    else 
    {
        for(int i = 0;i <= rear;i++)
        printf("\t%d",q[i]);
    }
}
int main()
{
    int q[10];
    int front,rear,num,ch;
    front = rear = -1;
    do
    {
        printf("\nPress 1 - Add a priority value");
        printf("\nPress 2 - Delete a value");
        printf("\nPress 3 - Display");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter a value: ");
            scanf("%d",&num);
            enqueue(q,&front,&rear,num);
            break;
            case 2:
            dequeue(q,&front,&rear);
            break;
            case 3:
            display(q,front,rear);
            break;
            case 4:
            break;
        }
    } while (ch != 4);
    return 0;
}