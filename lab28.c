/*program to implement polynomial addition using linked lists*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int coeff;
    int exp;
    struct Node *next;
}Poly;
Poly *addAtEnd(Poly *start,int value,int power)
{
    Poly *temp,*ptr;
    temp = (Poly*)malloc(sizeof(Poly));
    temp->coeff = value;
    temp->exp = power;
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
    return start;
}
void display(Poly *start)
{
    Poly *ptr;
    ptr = start;
    printf("\nPolynomial is: ");
    while(ptr != NULL)
    {
        printf("%d x^%d+",ptr->coeff,ptr->exp);
        ptr = ptr->next;
    }
    printf("\n");
}
Poly *add(Poly *p,Poly *q)
{
    Poly *newstart = NULL;
    while(p != NULL && q != NULL)
    {
        if(p->exp > q->exp)
        {
            newstart = addAtEnd(newstart,p->coeff,p->exp);
            p = p->next;
        }
        else if(q->exp > p->exp)
        {
            newstart = addAtEnd(newstart,q->coeff,q->exp);
            q = q->next;
        }
        else 
        {
            newstart = addAtEnd(newstart,q->coeff+p->coeff,p->exp);
            q = q->next;
            p = p->next;
        }
    }
    while(p != NULL)
    {
        newstart = addAtEnd(newstart,p->coeff,p->exp);
        p = p->next;
    }
    while(q != NULL)
    {
        newstart = addAtEnd(newstart,q->coeff,q->exp);
        q = q->next;
    }
    return newstart;
}
int main()
{
    int n,m,i,num;
    Poly *start1,*start2,*result;
    start1 = start2 = NULL;
    printf("What is the degree of first polynomial: ");
    scanf("%d",&n);
    for(i = n;i >= 0;i--)
    {
        printf("\nEnter the value of power %d: ",i);
        scanf("%d",&num);
        if(num != 0)
        start1 = addAtEnd(start1,num,i);
    }
    printf("\nWhat is the degree of 2nd polynomial: ");
    scanf("%d",&m);
    for(i = m;i >= 0;i--)
    {
        printf("\nEnter the value of power %d: ",i);
        scanf("%d",&num);
        if(num != 0)
        start2 = addAtEnd(start2,num,i);
    }
    printf("\nPolynomial 1: ");
    display(start1);
    printf("\nPolynomial 2: ");
    display(start2);
    printf("\nSum of two polynomials: ");
    result = add(start1,start2);
    display(result);
    return 0;
}