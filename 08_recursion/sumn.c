#include<stdio.h>

int sumn(int n)
{
    if(n==0)
        return 0;

    return n + sumn(n-1);

}


void main()
{
    int num, res;

    printf("Enter the number of terms  : ");
    scanf("%d", &num);

    res = sumn(num);

    printf("Sum of numbers upto %d : %d\n", num, res);
}