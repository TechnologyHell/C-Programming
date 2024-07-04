#include<stdio.h>

int power(int a, int b)
{
    int num = a, i;

    if(b==0)
        return 1;
    
    else
    {
        for(i=1; i<b; i++)
            {
                num = num * a;
            }
        
         return(num);
    }
}

void main()
{
    int x, n, res;

    printf("Enter the Base number  : ");
    scanf("%d", &x);

    printf("Enter the power : ");
    scanf("%d", &n);

    res = power(x,n);

    printf("%d\n", res);
}