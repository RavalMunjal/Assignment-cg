// 1.Continuous Number triangle

#include <stdio.h>
int main() {

    int n, r, i, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++) {

        for (i = 1; i <= r; i++) {
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }
    return 0;
}