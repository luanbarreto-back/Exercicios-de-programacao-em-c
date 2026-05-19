#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas (1 a 20): ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas (1 a 20): ");
    scanf("%d", &colunas);

    if (linhas < 1) linhas = 1;
    if (linhas > 20) linhas = 20;
    if (colunas < 1) colunas = 1;
    if (colunas > 20) colunas = 20;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
