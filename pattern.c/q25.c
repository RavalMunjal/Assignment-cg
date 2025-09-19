#include <stdio.h>
// Palindrome Triangle (alphabets)
int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {
       
        for (int i = 0; i < r; i++) {
            printf("%c ", 'A' + i);
        }
        
        for (int i = r - 2; i >= 0; i--) {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }

    return 0;
}

