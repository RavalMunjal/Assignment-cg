#include <stdio.h>
int main() {
    int n, i, j;
    int num = 1;  

    printf("Enter the size of square: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {       
        for(j = 1; j <= n; j++) { 
            printf("%2d ", num);    
            num++;
        }
        printf("\n");
    }

    return 0;
}
