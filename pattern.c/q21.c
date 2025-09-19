#include <stdio.h>
// Right-Aligned Inverted Triangle (Stars)
int main() {
    int n = 5;
    for (int r = 1; r <= n; r++) {
        for (int j = 1; j <= n; j++) {
            if (j < r)       
                printf(" ");
            else             
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
