/*program to perform operations on BST*/
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
    Tree *temp,*ptr;
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
            if(num < ptr->data)
            {
                if(ptr->left == NULL)
                {
                    ptr->left = temp;
                    break;
                }
                else 
                ptr = ptr->left;
            }
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
            else 
            {
                printf("\nDuplicate value is not allowed");
                free(temp);
                break;
            }
        }
    }
}
void delete(Tree *ptr,int val)
{
    if(ptr == NULL)
    printf("\nTree is empty");
    else if(val < ptr->data)
    delete(ptr->left,val);
    else if(val > ptr->data)
    delete(ptr->right,val);
    else if(ptr->left == NULL && ptr->right == NULL)
    free(ptr);
    else if(ptr->left == NULL || ptr->right == NULL)
    {
        Tree *temp;
        if(ptr->left == NULL)
        temp = ptr->left;
        else 
        temp = ptr->right;
    }
    free(ptr);
    printf("\nThe value deleted is %d",val);
}
void search(int n)
{
    Tree *ptr,*parent;
    parent = NULL;
    ptr = root;
    while(ptr != NULL)
    {
        if(ptr->data == n)
        {
            printf("\nFound ");
            if(parent == NULL)
            printf(" at root");
            else if(n > parent->data)
            printf(" at right of %d",parent->data);
            else 
            printf(" at left of %d",parent->data);
            break;
        }
        else if(n > ptr->data)
        {
            parent = ptr;
            ptr = ptr->right;
        }
        else if(n < ptr->data)
        {
            parent = ptr;
            ptr = ptr->left;
        }
    }
    if(ptr == NULL)
    printf("\nValue not found");
}
void min(Tree *ptr)
{
    if(ptr == NULL)
    return;
    else if(ptr->left != NULL)
    return min(ptr->left);
    printf("\nThe minimum value in the tree is %d",ptr->data);
}
void max(Tree *ptr)
{
    if(ptr == NULL)
    return;
    else if(ptr->right != NULL)
    return max(ptr->right);
    printf("\nThe maximum value in the tree is %d",ptr->data);
}
int height(Tree *ptr)
{
    int rh,lh;
    if(ptr == NULL)
    return;
    else 
    {
        lh = height(ptr->left);
        rh = height(ptr->right);
        if(lh > rh)
        return lh + 1;
        else 
        return rh + 1;
    }
}
int count(Tree *ptr)
{
    if(ptr == NULL)
    return 0;
    else 
    return count(ptr->left) + count(ptr->right) + 1;
}
void preorder(Tree *ptr)
{
    if(ptr == NULL)
    return;
    else 
    {
        printf("\t%d\t",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void inorder(Tree *ptr)
{
    if(ptr == NULL)
    return;
    else 
    {
        inorder(ptr->left);
        printf("\t%d\t",ptr->data);
        inorder(ptr->right);
    }
}
void postorder(Tree *ptr)
{
    if(ptr == NULL)
    return;
    else 
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("\t%d\t",ptr->data);
    }
}
int main()
{
    root = NULL;
    int ch,num,res;
    printf("\nDrishti Bansal \t BCA 2B \t09917702024");
    do
    {
        printf("\nPress 1 - Add a node");
        printf("\nPress 2 - Delete a node");
        printf("\nPress 3 - Search a node");
        printf("\nPress 4 - Count the number of nodes");
        printf("\nPress 5 - Height of tree");
        printf("\nPress 6 - Maximum value in the tree");
        printf("\nPress 7 - Minimum value in the tree");
        printf("\nPress 8 - Display");
        printf("\nPress 9 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            add(num);
            break;
            case 2:
            printf("\nEnter the value to be deleted: ");
            scanf("%d",&num);
            delete(root,num);
            break;
            case 3:
            printf("\nEnter the number to be searched: ");
            scanf("%d",&num);
            search(num);
            break;
            case 4:
            res = count(root);
            printf("\nThe total number of nodes in the tree are %d",res);
            break;
            case 5:
            res = height(root);
            printf("\nThe height of the tree is %d",res);
            break;
            case 6:
            max(root);
            break;
            case 7:
            min(root);
            printf("\nThe minimum value in the tree is %d",res);
            break;
            case 8:
            printf("\nPreorder traversal: ");
            preorder(root);
            printf("\nInorder traversal: ");
            inorder(root);
            printf("\nPostorder traversal: ");
            postorder(root);
            break;
        }
    } while (ch != 9);
    return 0;
}