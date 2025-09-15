// 1.Multiplication Table Square

#include <stdio.h>
int main() {
    int n, r, c;

    printf("Enter size of table: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++) {
        for (c = 1; c <= n; c++) {
            printf("%d", r * c);  
        }
        printf("\n");
    }
    return 0;
}
