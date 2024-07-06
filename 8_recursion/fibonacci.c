#include<stdio.h>

int fibonacci(int n)
{
    if(n==1 || n==0)
        return n;

    else
        return fibonacci(n-1) + fibonacci(n-2);
}

void main()
{
    int n, i;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("Fibonacci Series upto %d terms : \n", n);

    for(i=0; i<n; i++)
        printf("%d\t", fibonacci(i));

    printf("\n");

}