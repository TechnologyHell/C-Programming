#include<stdio.h>
#define max 100

void main()
{
    int array[max], pointer[max], size, i;
    int* ptr = array;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements : \n");
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);

    printf("Traversing the Array \n");
    for(i=0; i<size; i++)
    {
        printf("Index %d : [%d] : %p\n", i, array[i], ptr++);
    }
    
}