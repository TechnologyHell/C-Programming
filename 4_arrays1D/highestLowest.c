#include<stdio.h>
#define MAX 100

void main()
{
    int array[MAX], size, i, low, high;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    printf("Enter the elements : \n");
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);

    low = array[0], high = array[0];

    for(i=0; i<size; i++)
    {
        if(array[i] > high)
            high = array[i];
        
        if(array[i] < low)
            low = array[i];
    }

    printf("Highest : %d\nLowest : %d", high, low);

}