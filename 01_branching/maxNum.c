#include<stdio.h>

void main()
{
    int x, y, z, old;

    printf("Enter the ages for Mr. X, Mr. Y and Mr. Z : ");
    scanf("%d %d %d", &x, &y, &z);

    if(x>y)
    {
        if(x>z)
            old = x;
        else    
            old = z;
    }
    else
    {
        if(y>z)
            old = y;
        else    
            old = z;
    }

    printf("Oldest age : %d", old);
}