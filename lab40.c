/*program to create a binary tree and show all three traversal order*/
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
    temp->left = NULL;
    temp->right = NULL;
    if(root == NULL)
    root = temp;
    else 
    {
        ptr = root;
        while(ptr != NULL)
        {
            if(ptr->left == NULL)
            {
                ptr->left = temp;
                break;
            }
            else if(ptr->left != NULL)
            ptr = ptr->left;
            else if(ptr->right == NULL)
            {
                ptr->right = temp;
                break;
            }
            else if(ptr->right != NULL)
            ptr = ptr->right;
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
int main()
{
    root = NULL;
    int ch,num;
    do
    {
        printf("\nDrishti Bansal");
        printf("\nPress 1 - Add a node");
        printf("\nPress 2 - Display");
        printf("\nPress 3 - Exit");
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
        }
    } while (ch != 3);
    return 0;
}