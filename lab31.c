/*program to reverse the string using stack*/
#include<stdio.h>
#include<string.h>
int a[10];
int top = -1;
void push(char str,int *top)
{
    if(*top == 9)
    printf("\nStack is full");
    else 
    {
        *top = *top + 1;
        a[*top] = str;
    }
}
char pop(int *top)
{
    if(*top == -1)
    printf("\nStack is empty");
    else 
    {
        char str = a[*top];
        *top = *top - 1;
        return str;
    }
}
void reverse(char *str,int *top)
{
    int len = strlen(str);
    for(int i = 0;i < len;i++)
    push(str[i],&top);
    for(int i = 0;i < len;i++)
    str[i] = pop(&top);
}
int main()
{
    char str[10];
    int top = -1;
    printf("\nEnter the string: ");
    gets(str);
    printf("\nThe string entered is:");
    for(int i = 0;i < 10;i++)
    printf("%s",str[i]);
    reverse(str,&top);
    printf("\nThe reversed string is:");
    for(int i = 0;i < 10;i++)
    printf("%s",str[i]);
    return 0;
}