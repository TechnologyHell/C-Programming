#include<stdio.h>

int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    
    else
        return n * factorial(n-1);
}

void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    if(n<0)
        printf("Invalid Input\n");
    else
        printf("%d Factorial : %d\n", n, factorial(n));
}