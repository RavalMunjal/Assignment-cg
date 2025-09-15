#include<stdio.h>
int main (){  
    // 3.Right-angled Triangle — Alphabets (increasing)

          int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {      
        for (int j = 0; j < i; j++) {    
            printf("%c",'A'+j);
        }
        printf("\n");  
    }

    return 0;
}