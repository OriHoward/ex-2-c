#include <stdio.h>
#include "my_mat.h"


#define N 3


int main() {
    int mat[N][N];
    int exit = 1;
    char userInput = ' ';
    while(exit) {
        scanf("%c",&userInput);
        if(userInput == 'A') {
            input(mat);
             // call function number 1
        }
        if(userInput == 'B') {
            continue; // call function number 2
        }
        if(userInput == 'C') {
            continue; // call function number 3
        }
        if(userInput == 'D') {
            exit = 0; // exit
        }
    }
    return 0;
}
