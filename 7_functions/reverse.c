#include<stdio.h>

int reverse(int num)
{
    int newnum=0, r, s;

    while(num!=0)
    {
        r = num % 10;
        newnum = newnum * 10 + r;
        num = num / 10;
    }

    return newnum;
}

void main()
{
    int number, res;

    printf("Enter a number : ");
    scanf("%d", &number);

    res = reverse(number);

    printf("Reverse of %d is : %d\n", number, res);

}