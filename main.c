#include <stdio.h>
#include "my_mat.h"


int main() {
    int exit = 1;
    char userInput = ' ';
    while (exit) {
        scanf("%c", &userInput);
        if (userInput == 'A') {
            input();
            copyMat();
            createShortPathMatrix();
        }
        if (userInput == 'B') {
            int path = findShortestPath();
            if (path) {
                printf("True\n");
            } else {
                printf("False\n");
            }
        }

        if (userInput == 'C') {
            int path = findShortestPath();
            if (path) {
                printf("%d\n", path);
            } else {
                printf("-1\n");
            }
        }
        if (userInput == 'D') {
            exit = 0; // exit
        }
    }
    return 0;
}
