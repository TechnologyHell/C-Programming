#include<stdio.h>

void main()
{
    int num, n, rev=0, dig;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    n = num;

    while ( num != 0)
    {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }

    if (rev == n)
        printf("Palindrome\n");
    else    
        printf("Not Palindrome\n");
}