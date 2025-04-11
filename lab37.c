/*program to find factorial of a number using recursion*/
#include<stdio.h>
int fact(int n)
{
    if(n == 1)
    return 1;
    else 
    return (n * fact(n-1));
}
int main()
{
    int num,i,val;
    printf("\nDrishti Bansal");
    printf("\nEnter a number: ");
    scanf("%d",&num);
    val = fact(num);
    printf("\nFactorial of %d is %d",num,val);
    return 0;
}