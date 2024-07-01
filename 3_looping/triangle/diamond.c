#include<stdio.h>

void main()
{
    int row, i, j, k;
    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(i=1; i<=row; i+=2)
    {
        for(j=1; j<=(row-i)/2; j++)
            printf(" ");

        for(j=1; j<=i; j++)
            printf("*");
        
        printf("\n");
    }


    for(i=row-2; i>=1; i-=2)
    {
        for(j=1; j<=(row-i)/2; j++)
            printf(" ");

        for(j=1; j<=i; j++)
            printf("*");
        
        printf("\n");
    }
}