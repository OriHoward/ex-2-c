#include <stdio.h>
#include "my_mat.h"

#define N 4
int mat[N][N];
int shortPathMat[N][N];

// return the minimum value
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

// deep copy of the matrix
void copyMat() {
    for (int row = 0; row < N; ++row) {
        for (int column = 0; column < N; ++column) {
            shortPathMat[row][column] = mat[row][column];
        }
    }
}

// this function creates a matrix which the shortest paths
void createShortPathMatrix() {
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (i != j) {
                    if (shortPathMat[i][k] != 0 && shortPathMat[k][j] != 0 && shortPathMat[i][j] == 0) {
                        shortPathMat[i][j] = shortPathMat[i][k] + shortPathMat[k][j];
                    }
                    if (shortPathMat[i][k] != 0 && shortPathMat[k][j] != 0 && shortPathMat[i][j] != 0) {
                        shortPathMat[i][j] = min(shortPathMat[i][j], shortPathMat[i][k] + shortPathMat[k][j]);
                    }
                }
            }
        }
    }
}

// first function - takes input from the user which is the values of the matrix
void input() {
    int i, j;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("enter a value for the matrix in [%d],[%d] - ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}


// second function
//int isPathExists() {
//    int row, column;
//    printf("please enter a row number and a column number: ");
//    scanf("%d %d", &row, &column);
//    return shortPathMat[row][column];
//}


// second + third function
int findShortestPath() {
    int row, column;
    printf("please enter a row number and a column number: ");
    scanf("%d %d", &row, &column);
    return shortPathMat[row][column];

}


