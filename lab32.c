/*program to perform insertion,deletion,display operations using circular queue*/
#include<stdio.h>
void enqueue(int q[],int *front,int *rear,int value)
{
    if((*front == 0 && *rear == 9)|| *front == *rear + 1)
    printf("\nQueue is full");
    else if(*front == -1)
    {
        *front = *rear = 0;
        q[0] = value;
    }
    else 
    {
        if(*rear == 9)
        *rear = 0;
        else 
        {
            *rear = *rear + 1;
            q[*rear] = value;
        }
    }
}
void dequeue(int q[],int *front,int *rear)
{
    if(*front == -1)
    printf("\nQueue is empty");
    else if(*front == *rear)
    *front = *rear = -1;
    else 
    {
        if(*front == 9)
        *front = 0;
        else 
        *front = *front + 1;
    }
}
void display(int q[],int front,int rear)
{
    printf("\nQueue is: ");
    if(front <= rear)
    {
        for(int i = front;i <= rear;i++)
        printf("\t%d",q[i]);
    }
    else 
    {
        for(int i = front;i < 10;i++)
        printf("\t%d",q[i]);
        for(int i = 0;i <= rear;i++)
        printf("\t%d",q[i]);
    }
}
int main()
{
    int q[10];
    int front = -1,rear = -1,ch,num;
    do
    {
        printf("\nPress 1 - Add a new element");
        printf("\nPress 2 - Delete a element");
        printf("\nPress 3 - Display");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
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
            case 4:
            break;
        }
    } while (ch != 4);
    return 0;
}