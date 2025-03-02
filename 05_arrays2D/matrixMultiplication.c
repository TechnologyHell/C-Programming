#include<stdio.h>
#define max 100

int main()
{
    int a[max][max], b[max][max], res[max][max], i, j, k, row, col;

    printf("Enter the order for a square matrix : ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix A : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            res[i][j] = 0;
            for(k=0; k<col; k++)
            {
                res[i][j] = res[i][j] + (a[i][k] * b[k][j]);
            }
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

    return 0;
    
}