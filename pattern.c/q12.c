#include<stdio.h>
int main(){
    // 3.inverted right-angled triangle(alphabets)

    int n, r, i;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++) {
       
        for (i = 0; i <= n - r + 1; i++) {
            printf("%c",'A'+i);
        }
        
        printf("\n");
    }

    return 0;
}