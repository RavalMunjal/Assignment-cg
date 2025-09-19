#include <stdio.h>
 //Right-Aligned Inverted Triangle (alphabets)
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j<= n; j++) {
            if (j < i)
                printf("  ");           
            else
                printf("%c ", 'A' + j - i);  
        }
        printf("\n");
    }

    return 0;
}
