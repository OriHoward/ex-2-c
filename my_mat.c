#include <stdio.h>
#include "my_mat.h"

#define N 10
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
        for (int row = 0; row < N; ++row) {
            for (int column = 0; column < N; ++column) {
                if (row != column) {
                    if (shortPathMat[row][k] != 0 && shortPathMat[k][column] != 0 && shortPathMat[row][column] == 0) {
                        shortPathMat[row][column] = shortPathMat[row][k] + shortPathMat[k][column];
                    }
                    if (shortPathMat[row][k] != 0 && shortPathMat[k][column] != 0 && shortPathMat[row][column] != 0) {
                        shortPathMat[row][column] = min(shortPathMat[row][column], shortPathMat[row][k] + shortPathMat[k][column]);
                    }
                }
            }
        }
    }
}

// first function - takes input from the user which is the values of the matrix
void input() {
    for (int row = 0; row < N; ++row) {
        for (int column = 0; column < N; ++column) {
            scanf(" %d", &mat[row][column]);
        }
    }
}

int findShortestPath() {
    int row, column;
    scanf(" %d %d", &row, &column);
    return shortPathMat[row][column];

}


