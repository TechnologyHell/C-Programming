#include<stdio.h>

void main()
{
    int row, i, j, k;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
            printf(" ");
        
        for(j=1; j<=2*i-1; j++)
            printf("*");
        
        printf("\n");
    }
}