#include<stdio.h>

void binary(int num)
{
    int barr[32], i=0, j;

    if(num == 0)
        printf("0\n;");
    
    while(num>0)
    {
        barr[i] = num%2;
        num = num/2;
        i++;
    }

    for(j=i-1; j>=0; j--)
    {
        printf("%d", barr[j]);
    }
    printf("\n");

}

void main()
{
    int n, i, res;

    printf("Enter the decimal number : ");
    scanf("%d", &n);

    printf("Binary Equivalent : ");
    binary(n);
}