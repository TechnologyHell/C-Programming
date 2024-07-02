#include<stdio.h>
#define max 100

int main()
{
    int a1[max][max], a2[max][max], res[max][max], i, j, row, col;

    printf("Enter the order of the matrices : ");
    scanf("%d %d", &row, &col);

    printf("Enter the elements for matrix 1 : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }

    printf("Enter the elements for matrix 2 : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            res[i][j] = a1[i][j] + a2[i][j];
        }
    }

    printf("Resultant Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}