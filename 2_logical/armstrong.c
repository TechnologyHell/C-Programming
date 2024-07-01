#include<stdio.h>
#include<math.h>

void main()
{
    int num, i, x, digits = 0, store, rem, newnum = 0;
    printf("Enter the number  : ");
    scanf("%d", &num);

    store = num;

    while (num != 0)
    {
        num = num/10;
        digits++;
    }

    num = store;

    while (num != 0)
    {
        rem = num%10;
        newnum = newnum + pow(rem, digits);
        num = num/10;
    }

    if (newnum == store)
        printf("Armstrong\n");
    else   
        printf("Not Armstrong\n");

}