#include<stdio.h>

void main()
{
    int num, i, prime = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num < 2)
        prime = 1;
    else
    {
        for(i=2; i<num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("Prime\n");
    else    
        printf("Not Prime\n");

}