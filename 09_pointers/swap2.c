#include<stdio.h>

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void main()
{
    int a, b;

    printf("Enter the value for a : ");
    scanf("%d", &a);

    printf("Enter the value for b : ");
    scanf("%d", &b);

    printf("INITIAL VALUES : \n");
    printf("a : %d\nb : %d\n", a,b);

    swap(&a,&b);

    printf("AFTER SWAP : \n");
    printf("a : %d\nb : %d\n", a,b);
}