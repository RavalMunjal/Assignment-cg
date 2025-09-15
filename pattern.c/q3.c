//3.single row of char
#include<stdio.h>
int main(){
int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%c", 'A' + i);
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}