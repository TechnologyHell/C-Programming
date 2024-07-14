#include<stdio.h>

void main()
{
    int i = 44;
    int* ptri = &i, *ptra = &i;
    
    char ca = '4', cb = 'a';
    char *ptrca = &ca, *ptrcb = &cb, *ptrb = &ca;


    printf("Int val %d\n", i);
    printf("Int ptr %d\n", ptri);

    ptri++;
    printf("ptr ++ : %d\n", ptri);

    printf("ptr + 2 : %d\n", ptri + 2);
    printf("ptr - 3 : %d\n", ptri - 3);


    printf("Char val %c\n", ca);
    printf("Char ptr %d\n", ptrca);

    ptrca--;
    printf("ptr -- : %d\n", ptrca);
    printf("ptr + 1 : %d\n", ptrca + 1);
    printf("ptr - 3 : %d\n", ptrca - 3);



    //dereference
    printf("\nValues\n");

    printf("int %d\n", *ptra);
    printf("char %c\n", *ptrb);
    
}