#include <stdio.h>
//Palindrome Triangle (Numbers
int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {
        
        for (int i = 1; i <= r; i++) {
            printf("%d ", i);
        }
        
        for (int i = r - 1; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
