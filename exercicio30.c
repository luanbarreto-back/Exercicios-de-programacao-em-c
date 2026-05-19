#include <stdio.h>

int main() {
    int num;

    printf("Digite um número natural entre 0 e 9: ");
    scanf("%d", &num);

    if (num < 0 || num > 9) {
        printf("Número inválido!\n");
        return 1;
    }

    printf("Tabuada de %d:\n", num);
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
