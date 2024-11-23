#include<stdio.h>
int main()
{
    int r1, r2, c1, c2;
    printf("Enter values for r1, c1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter values for r2, c2: ");
    scanf("%d %d", &r2, &c2);

    int a[r1][c1], b[r2][c2], c[r1][c1];
    if (c1 == c2 && r1 == r2){
        int i, j;
       for(i = 0;i < r1;i++){
            for (j = 0;j < c1;j++){
               
                scanf("%d", &a[i][j]);
            }
        }

        for(i = 0;i < r2;i++){
            for (j = 0;j < c2;j++){
               
                scanf("%d", &b[i][j]);
            }
        }

        for(i = 0;i < r1;i++){
            for (j = 0;j < c1;j++){
                c[i][j] = a[i][j] + b[i][j];
             }   
        }
        for(i = 0;i < r1;i++){
            for (j = 0;j < c1;j++){
                printf("%d\t", c[i][j]);
            }
        }
    } else {
        printf("Addition is not possible");
    }
    printf("\n");

}