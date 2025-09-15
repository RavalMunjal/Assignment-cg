   // 2. Single Row of Numbers
#include<stdio.h>
int main(){
     int num;
    printf("Enter num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d",i);
            if (i < num) {  
            printf(" ");
        }
    }
return 0;
}