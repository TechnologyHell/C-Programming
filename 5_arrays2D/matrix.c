#include<stdio.h>
#define max 100

void main()
{
    int array[max][max], row, col, elem, i, j;

    printf("Enter order of matrix : ");
    scanf("%d %d", &row, &col);

    printf("Enter the elements : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", array[i][j]);     
        }    
        printf("\n");
    }
}