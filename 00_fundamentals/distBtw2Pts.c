#include<stdio.h>
#include<math.h>

void main()
{
    float x1,y1, x2,y2, dist;
    printf("Enter the coordinates for Point 1 : ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates for Point 2 : ");
    scanf("%f %f", &x2, &y2);

    dist = sqrt ( pow((x2-x1),2) + pow((y2-y1),2) );

    printf("The distance between the given points is : %0.2f", dist);
}