#include <stdio.h>

int main() {
    int n = 5;

    // Upper pyramid
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n + r - 1; c++) {
            if (c <= n - r)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    // Lower inverted pyramid
    for (int r = n - 1; r >= 1; r--) {
        for (int c = 1; c <= n + r - 1; c++) {
            if (c <= n - r)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
