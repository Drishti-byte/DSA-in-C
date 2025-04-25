/*program to implement double ended queue using linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}Node;
Node *front,*rear;
void enqueue_beg(int value)
{
    if(front == NULL)
    {
        front = (Node*)malloc(sizeof(Node));
        front->data = value;
        front->next = NULL;
        rear = front;
    }
    else 
    {
        Node *temp;
        temp = (Node*)malloc(sizeof(Node));
        temp->data = value;
        temp->next = front;
        front = temp;
    }
}
void dequeue_end()
{
    if(front == NULL)
    printf("\nQueue is empty");
    else if(front == rear)
    {
        free(front);
        front = rear = NULL;
    }
    else 
    {
        Node *temp;
        temp = front;
        front = front->next;
        free(temp);
    }
}
void dequeue_beg()
{
    if(front == NULL)
    printf("\nQueue is empty");
    else if(front == rear)
    {
        free(front);
        front = rear = NULL;
    }
    else 
    {
        Node *ptr;
        ptr = front;
        while(ptr->next != rear)
        ptr = ptr->next;
        free(rear);
        ptr->next = NULL;
        rear = ptr;
    }
}
void display()
{
    if(front == NULL)
    printf("\nQueue is empty");
    else 
    {
        Node *ptr;
        ptr = front;
        printf("\nQueue is: ");
        while(ptr != NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    int ch,num;
    do
    {
        printf("\nPress 1 - Add at beginning");
        printf("\nPress 2 - Add at end");
        printf("\nPress 3 - Delete from beginning");
        printf("\nPress 4 - Delete from end");
        printf("\nPress 5 - Display");
        printf("\nPress 6 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            printf("\nEnter a number: ");
            scanf("%d",&num);
            enqueue_beg(num);
            break;
            case 2:
            printf("\nEnter a number: ");
            scanf("%d",&num);
            enqueue_end(num);
            break;
            case 3:
            dequeue_beg();
            break;
            case 4:
            dequeue_end();
            break;
            case 5:
            display();
            break;
            case 6:
            break;
        }
    } while (ch != 6);
    return 0;
}