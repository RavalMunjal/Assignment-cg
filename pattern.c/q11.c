#include<stdio.h>
int main(){

  //2.Inverted Right-Angled Triangle (number)

    int n, r, i;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++) {
       
        for (i = 1; i <= n - r + 1; i++) {
            printf("%d ", i);
        }
        
        printf("\n");
    }

    return 0;
}