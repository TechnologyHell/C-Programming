#include<stdio.h>

int gcd(int x, int y)
{
    if( y==0 )
        return x;
    else
        return gcd(y, x%y);
        
}

void main()
{
    int a , b , res;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    res = gcd(a,b);

    printf("GCD of %d and %d is %d\n", a, b, res);
}