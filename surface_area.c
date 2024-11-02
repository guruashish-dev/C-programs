#include<stdio.h>
int main()
{
    int l, w, h, SURFACEAREA;
    printf("enter value of length: ");
    scanf("%d", &l);
    printf("Enter value of width: ");
    scanf("%d", &w);
    printf("Enter value of height: ");
    scanf("%d", &h);

    SURFACEAREA = 2*(l * w + w * h + l * h);

    printf("SA: %d",SURFACEAREA);
    return 0;

}