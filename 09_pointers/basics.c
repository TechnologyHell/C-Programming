#include<stdio.h>

void main()
{
    int a = 10, b, *npt = NULL;
    int* ptra = &a;
    int** ptrb = &ptra;

    printf("Content of A : %d\n", a);
    printf("Address of A : %d\n", &a);       
 
    printf("Content of Ptr A : %d\n", ptra);
    printf("Address of Ptr A : %d\n", &ptra);

    printf("Content of Ptr B : %d\n", ptrb);
    printf("Address of Ptr B : %d\n", &ptrb);

    printf("Pointer B : %d\n", ptrb);

    printf("Pointer NULL : %d\n", npt);
}