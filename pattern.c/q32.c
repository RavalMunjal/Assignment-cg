#include <stdio.h>

int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= r; c++) {
            if (c == 1 || c == r || r == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
