#include <stdio.h>

int main() {
    int N;

    while(1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &N);
        if(N == 0) break;

        int soma = 0, contador = 0, impar = 1;

        while(soma < N) {
            soma += impar;
            impar += 2;
            contador++;
        }

        if(soma == N) {
            printf("A raiz quadrada de %d é %d\n", N, contador);
        } else {
            printf("%d nao é um quadrado perfeito.\n", N);
        }
    }

    return 0;
}
