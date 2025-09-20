#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=n;i>=1;i--){
        for(j=0;j<n-i;j++) printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%c",(i==n || j==1 || j==2*i-1)?'*':' ');
        printf("\n");
    }
}
