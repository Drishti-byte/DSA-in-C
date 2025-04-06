/*program to implement insert,delete,display using linear queue*/
#include<stdio.h>
void enqueue(int q[],int *front,int *rear,int value)
{
    if(*rear == 9)
    printf("\nQueue is full");
    else if(*front == -1 && *rear == -1)
    {
        *front = *rear = 0;
    }
    else 
    {
        *rear = *rear + 1;
    }
    q[*rear] = value;
}
void dequeue(int q[],int *front,int *rear)
{
    if(*front == -1 || *front > *rear)
    printf("\nQueue is empty");
    else 
    {
        int val = q[*front];
        *front = *front + 1;
    }
}
void display(int q[],int front,int rear)
{
    printf("\nQueue is: ");
    if(front == -1 || front > rear)
    printf("\nQueue is empty");
    else 
    {
        for(int i = front;i <= rear;i++)
        printf("\n%d",q[i]);
    }
}
int main()
{
    int q[10];
    int front = -1,rear = -1,ch,num;
    do
    {
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
            case 4:
            break;
        }
    } while (ch != 4);
    return 0;
}