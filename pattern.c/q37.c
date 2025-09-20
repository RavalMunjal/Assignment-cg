
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        // Print leading spaces
        for(j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars decreasing
        for(j = 0; j < n - i; j++) {
            printf("*");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
