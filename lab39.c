/*program to calculate GCD of two number using recursion*/
#include<stdio.h>
int gcd(int x,int y)
{
    int rem;
    rem = x % y;
    if(rem == 0)
    return y;
    else 
    return (gcd(y,rem));
}
int main()
{
    int num1,num2,res;
    printf("Drishti Bansal");
    printf("\nEnter two numbers: ");
    scanf("%d %d",&num1,&num2);
    res = gcd(num1,num2);
    printf("\nGreatest Common Divisor of %d and %d: %d",num1,num2,res);
    return 0;
}