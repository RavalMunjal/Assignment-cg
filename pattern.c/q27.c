#include <stdio.h>
// Inverted Pyramid (numbers)
int main() {
    int n = 5;

    for (int r = n; r >= 1; r--) {
        int num = 1;
        for (int c = 1; c <= n + r - 1; c++) {
            if (c < (n - r + 1))
                printf("  ");  
            else
                printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
