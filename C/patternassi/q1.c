#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of stars: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    return 0;
}