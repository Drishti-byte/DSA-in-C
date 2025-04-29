/*program to implement operations on BST*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *left,*right;
}Tree;
Tree *root;
void add(int num)
{
    Tree *ptr,*temp;
    temp = (Tree*)malloc(sizeof(Tree));
    temp->data = num;
    temp->right = NULL;
    temp->left = NULL;
    if(root == NULL)
    root = temp;
    else 
    {
        ptr = root;
        while(ptr != NULL)
        {
            if(num > ptr->data)
            {
                if(ptr->right == NULL)
                {
                    ptr->right = temp;
                    break;
                }
                else 
                ptr = ptr->right;
            }
            else if(num < ptr->data)
            {
                if(ptr->left == NULL)
                {
                    ptr->left = temp;
                    break;
                }
                else 
                ptr = ptr->left;
            }
            else 
            {
                printf("\nDuplicate value is not allowed");
                free(temp);
                break;
            }
        }
    }
}
void preorder(Tree *ptr)
{
    if(ptr == NULL)
    return;
    printf("\t%d\t",ptr->data);
    preorder(ptr->left);
    preorder(ptr->right);
}
void inorder(Tree *ptr)
{
    if(ptr == NULL)
    return;
    inorder(ptr->left);
    printf("\t%d\t",ptr->data);
    inorder(ptr->right);
}
void postorder(Tree *ptr)
{
    if(ptr == NULL)
    return;
    postorder(ptr->left);
    postorder(ptr->right);
    printf("\t%d\t",ptr->data);
}
void search(int num)
{
    Tree *ptr,*parent;
    parent = NULL;
    ptr = root;
    while(ptr != NULL)
    {
        if(ptr->data == num)
        {
            printf("\nFound");
            if(parent == NULL)
            printf(" at root");
            else if(num > parent->data)
            printf(" at right of %d",parent->data);
            else 
            printf(" at left of %d",parent->data);
            break;
        }
        else if(num > ptr->data)
        {
            parent = ptr;
            ptr = ptr->right;
        }
        else if(num < ptr->data)
        {
            parent = ptr;
            ptr = ptr->left;
        }
    }
    if(ptr == NULL)
    printf("\nValue not found");
}
int main()
{
    root = NULL;
    int ch,num;
    do
    {
        printf("\nPress 1 - Add a new node");
        printf("\nPress 2 - Display");
        printf("\nPress 3 - Search a value");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter a number: ");
            scanf("%d",&num);
            add(num);
            break;
            case 2:
            printf("\nPreorder traversal: ");
            preorder(root);
            printf("\nInorder traversal: ");
            inorder(root);
            printf("\nPostorder traversal: ");
            postorder(root);
            break;
            case 3:
            printf("\nEnter the number to be searched: ");
            scanf("%d",&num);
            search(num);
            break;
        }
    } while(ch != 4);
    return 0;
}