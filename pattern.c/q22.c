#include <stdio.h>

int main() {
    int n = 5;
 //Right-Aligned Inverted Triangle (numbers)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j< i)
                printf("  ");     
            else
                printf("%d ", j - i + 1); 
        }
        printf("\n");
    }

    return 0;
}

