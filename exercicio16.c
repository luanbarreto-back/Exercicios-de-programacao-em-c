#include <stdio.h>

int main() {
    int idade, soma = 0;
    for(int i = 0; i < 3; i++) {
        printf("Digite a idade %d: ", i+1);
        scanf("%d", &idade);
        soma += idade;
    }
    printf("Media das idades: %.2f\n", soma / 3.0);
    return 0;
}
