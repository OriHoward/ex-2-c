#include "main.c"



void input(int mat[N][N]) {
    int i,j;
    for (i = 0; i < N; ++i) {
        for (j = 0; j <N; ++j) {
            printf("enter a value for the matrix in [%d],[%d] - ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

}

//int isPathExists(int mat[maxSize] int i, int j) {
//    return mat[i][j];
//}