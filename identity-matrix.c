#include<stdio.h>

int main() {
    int r,c,i,j;
    printf("Enter the size of an array: \n");
    scanf("%d%d",&r,&c);
    int A[r][c];
    if(r==c) {
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                if(i==j) {
                    A[i][j]=1;
                }
                else {
                    A[i][j] = 0;
                }
            }
        }
        printf("Identity Matrix\n");
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                printf("%d\t",A[i][j]);     
            }
            printf("\n");
        }
    }
    else {
        printf("The row and column size should be same for identity matrix\n");
    }
}
 linear search and binary search