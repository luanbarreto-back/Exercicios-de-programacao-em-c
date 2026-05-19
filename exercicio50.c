#include <stdio.h>

int main() {
    int numeroEscolhido, tentativa;
    int acertou = 0;

    printf("Jogador 1, escolha um número entre 1 e 10: ");
    scanf("%d", &numeroEscolhido);

    for (int i = 1; i <= 4; i++) {
        printf("Jogador 2, tentativa %d: ", i);
        scanf("%d", &tentativa);

        if (tentativa == numeroEscolhido) {
            printf("Parabéns! Você acertou na tentativa %d.\n", i);
            acertou = 1;
            break;
        }
    }

    if (!acertou) {
        printf("Jogador 2 não acertou o número. Era %d.\n", numeroEscolhido);
    }

    return 0;
}
