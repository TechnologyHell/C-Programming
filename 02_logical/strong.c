#include<stdio.h>
#include<math.h>

void main()
{
    int num, n, fact = 1, rem, sum = 0;

    printf("Enter the number  : ");
    scanf("%d", &num);

    n = num;

    while (num != 0)
    {
        rem = num%10;

        while (rem!=0)
        {
            fact = fact * rem;
            rem = rem-1;
        }

        sum = sum + fact;
        num = num/10;
        fact = 1;
    }

    if (sum == n)
        printf("Strong\n");
    else    
        printf("Not Strong\n");

}