#include <stdio.h>

int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}
