#include<stdio.h>
#define MAX 100

void main()
{
    int array[MAX], size, i, elem, found=0;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements \n");
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);

    printf("Enter the element to find : ");
    scanf("%d", &elem);

    for(i=0; i<size; i++)
    {
        if(array[i] == elem)
        {
            printf("Found at position %d\n", i+1);
            found = 1;
        }
    }

    if(!found)
        printf("Not Found\n");

}