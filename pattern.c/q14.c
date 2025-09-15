#include<stdio.h>
int main(){
        //2.continuous Alphabet triangle
    int n, r, i;
    char ch = 'A';
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++) {    
        for (i = 1; i <= r; i++) {
            printf("%c ", ch);
            ch++; 

            if (ch > 'Z') {
                ch = 'A';
            }
        }     
        printf("\n");
    }
    return 0;
}
