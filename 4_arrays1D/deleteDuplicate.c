#include<stdio.h>
#define MAX 100

int main()
{
    int array[MAX], size, i, j, k;

    printf("Enter the number of elements : ");
    scanf("%d", &size);
    
    printf("Enter the elements \n");
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);

    printf("Initial array is : \n");
    for(i=0; i<size; i++)
        printf("%d\n", array[i]);

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(array[i] == array[j])
            {
                for(k=j; k<size; k++)
                {
                    array[k] = array[k+1];
                }
                
                j--;
                size--;
            }
        }
    }

    printf("After deleting duplicates, the array is : \n");
    for(i=0; i<size; i++)
        printf("%d\n", array[i]);

}