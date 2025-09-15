#include <stdio.h>
int main() {
   // 1. Single Row of Stars

    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("*");
    }
    return 0;
}