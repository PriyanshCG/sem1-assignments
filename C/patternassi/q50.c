#include <stdio.h>

int main() {
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);
    int x = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", x);
            x--;
        }
        printf("\n");
    }
    return 0;
}
