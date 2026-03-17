#include <stdio.h>

int main() {
    float n, soma = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &n);
        soma += n;
    }
    printf("Media: %.2f\n", soma / 5);
    return 0;
}
