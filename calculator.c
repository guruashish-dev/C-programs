// to make a calculator
#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, sum, diff, mul, div;

    printf("enter value of a and b: ");
    scanf("%lf %lf",&a, &b);

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a/b;

    printf("sum: %.2f\n", sum);
    printf("diff: %.2f\n", diff);
    printf("mul: %.2f\n", mul);
    printf("div: %.2f\n", div);

    return 0;


}