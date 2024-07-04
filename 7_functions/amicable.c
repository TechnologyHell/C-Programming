#include<stdio.h>

int amicable(int a, int b)
{
    int sa=0, sb=0, i;

    for(i=1; i<a; i++)
    {
        if(a%i == 0)
            sa = sa + i;
    }

    for(i=1; i<b; i++)
    {
        if(b%i == 0)
            sb = sb + i;
    }

    if( a == sb && b == sa)
        return 1;
    else
        return 0;
}


void main()
{
    int a, b, res;

    printf("Enter the numbers  : ");
    scanf("%d %d", &a, &b);

    res = amicable(a,b);

    if(res)
        printf("Amicable\n");
    else
        printf("Not Amicable\n");
}