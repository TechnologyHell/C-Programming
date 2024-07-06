#include<stdio.h>

int reverse(int n, int rev)
{
    if(n<10)
        return(n);
    
    rev = rev * 10 + (n % 10 );

    return reverse(n/10, rev);

}

void main()
{
    int num, res;

    printf("Enter the number : " );
    scanf("%d", &num);

    res = reverse(num, 0);

    printf("Reverse of %d is %d\n", res);
}