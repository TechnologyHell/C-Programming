#include<stdio.h>
#define MAX 100

void main()
{
    int array[MAX], size, i, elem, flag=1, temp;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements : \n");
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);

    while(flag)
    {
        flag = 0;

        for(i=0; i<size-1; i++)
        {
            if(array[i] > array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                
                flag = 1;            
            }
        }
    }

    printf("After Sorting : \n");
    for(i=0; i<size; i++)
        printf("%d\n", array[i]);
}