#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("5 sucessores:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", n + i);
    }
    printf("\n");
    return 0;
}
