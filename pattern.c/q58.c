#include <stdio.h>
int main(){
    int n,i,j,mid;
    scanf("%d",&n);
    mid = n/2+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==mid || j==mid) printf("%d", mid);
            else printf(" ");
        }
        printf("\n");
    }
}
