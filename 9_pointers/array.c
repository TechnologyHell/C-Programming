#include<stdio.h>

void main()
{
    int arr[] = {10,20,30,40,50,69};       
    int *ptr = arr;

    printf("Address of array : %d\n", ptr);

    printf("Address of 1st element : %d, value : %d\n", ptr, *ptr);

    ptr--;
    printf("ptr : %d\n", ptr);
    printf("%d\n", *ptr);
    
    printf("Address of 1st element : %d\n",ptr);
    printf("%d\n", &ptr);
    printf("Address of 1st element : %d\n",arr);
    printf("Address of 1st element : %d\n",&arr);
    printf("Address of 1st element : %d\n",&arr[0]);

    printf("Address of 2nd element : %d\n", ++ptr);
    printf("Address of 3nd element : %d\n", ptr+1);

    printf("ptr add : %d\n", ptr);

    printf("Address of 2nd element : %d, value : %d\n\n", ptr, *ptr);


    
    printf("*Address of 1st element : %d\n",*(&arr));

    printf("*Address of 2nd element : %d\n", ++ptr);
    printf("*Address of 3nd element : %d\n", ptr+1);

}