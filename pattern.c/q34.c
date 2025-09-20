#include <stdio.h>

int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {

        for (int s = 1; s < r; s++) {
            printf(" ");
        }

        for (int c = 1; c <= r; c++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
