/*program to implement queues using linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}Node;
Node *front,*rear;
void enqueue(int value)
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
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}
void dequeue()
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
void display()
{
    Node *ptr;
    if(front == NULL)
    printf("\nQueue is empty");
    else 
    {
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
    front = rear = NULL;
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
            enqueue(num);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
        }
    } while (ch != 4);
    return 0;
}