#include<stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number :");
    scanf("%d", &b);

    printf("Before swapping, the values are %d and %d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping, the values are %d and %d\n", a, b);
}