#include<stdio.h>

int gcd(int a, int b)
{
    int i, result;

    for(int i = 1; i<=a && i<=b; i++)
    {
        if( a%i ==0 && b%i ==0)
            result = i;
    }

    return result;
}

int lcm(int a, int b)
{
    return ( (a*b) / (gcd(a,b)) );
}

void main()
{
    int num1, num2, resg, resl;

    printf("Enter the numbers : ");
    scanf("%d %d", &num1, &num2);

    resg = gcd(num1, num2);
    resl = lcm(num1, num2);

    printf("GCD of %d and %d : %d\n", num1, num2, resg);
    printf("LCM of %d and %d : %d\n", num1, num2, resl);
}