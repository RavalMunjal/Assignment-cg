#include <stdio.h>
// Inverted Pyramid (alphabets)
int main() {
    int n = 5;

    for (int r = n; r >= 1; r--) {
        int ch = 'A';
        for (int c = 1; c <= n + r - 1; c++) {
            if (c < (n - r + 1))
                printf("  ");
            else
                printf("%c ", ch++);
        }
        printf("\n");
    }

    return 0;
}
