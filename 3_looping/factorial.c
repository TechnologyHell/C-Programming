#include<stdio.h>

void main()
{
    int num, n, i, j, sum=0, fact=1;
    printf("Enter the number for factorial : ");
    scanf("%d", &num);

    n = num;

    while(num!=0)
    {
        fact = fact * num;
        num--;
    }

    printf("Factorial of %d : %d\n", n, fact);
}