#include<stdio.h>
#define max 100

int main()
{
    int a[max][max], b[max][max], res[max][max], i, j, k, size;

    printf("Enter the order of the matrices : ");
    scanf("%d", &size);

    printf("Enter matrix A : \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix B : \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            res[i][j] = 0;
        }
    }

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            for(k=0; k<size; k++)
            {
                res[i][j] = res[i][j] + a[i][k] * b[j][k];
            }
        }
    }

    printf("Resultant Matrix : \n");
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}