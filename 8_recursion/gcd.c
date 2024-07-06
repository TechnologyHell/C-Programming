#include<stdio.h>

int gcd(int x, int y)
{
    if( x==0 || y==0)
        return x;

        
}

void main()
{
    int a , b , res;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    res = gcd(a,b);

    printf("GCD of %d and %d is %d\n", a, b, res);
}