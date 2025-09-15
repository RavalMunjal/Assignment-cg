#include <stdio.h>
int main (){

    //2.square of numbers(row wise)

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {          
        for (int j = 1; j <= n; j++) {      
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;

}