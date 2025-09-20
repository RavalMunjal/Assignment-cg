#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';  

    printf("Enter the size of square: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {       
        for(j = 1; j <= n; j++) {  
            printf("%c ", ch);
            ch++;
            if(ch > 'Z') ch = 'A'; 
        }
        printf("\n");
    }

    return 0;
}
