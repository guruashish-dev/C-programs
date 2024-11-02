// to find area of triangle using herons formula
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    double s, HERON;
    printf("give a value for side a: ");
    scanf("%d", &a);

     printf("give a value for side b: ");
    scanf("%d", &b);

     printf("give a value for side c: ");
    scanf("%d", &c);

    s=a+b+c/2.0;

    HERON=sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area_of_triangle: %.2f", HERON);
    return 0;
}

