#include <stdio.h>
int main() {
    int n, x;
    printf("Enter a value: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        x = i % 2;  
        for (int j = 1; j <= n; j++) {
            printf("%d ", x);
            x = 1 - x;  
        }
        printf("\n");
    }
    return 0;
}
