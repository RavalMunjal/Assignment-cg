#include <stdio.h>

int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= n - r + 1; c++) {
            if (r == 1 || c == 1 || c == n - r + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
