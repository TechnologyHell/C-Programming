#include<stdio.h>

void main()
{
    int n, i;
    int t1 = 0, t2 = 1;
    int tn = (t1 + t2);

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d\t", t1);
        t1 = t2;
        t2 = tn;
        tn = (t1 + t2);
    }
}  