#include <stdio.h>

int main() {
    int i,j,rows = 5; 

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            if (i == 0 || j == rows / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

}

