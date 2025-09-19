#include <stdio.h>
// Inverted Pyramid (Stars)
int main() {
    int n = 5;

    for (int r = n; r >= 1; r--) {
        for (int c = 1; c <= n + r - 1; c++) {
            if (c < (n - r + 1))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
