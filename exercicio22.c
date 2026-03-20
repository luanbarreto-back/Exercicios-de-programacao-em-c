#include <stdio.h>

int main() {
    int num, opcao;

    do {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &num);

        for(int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }

        printf("Deseja continuar? (1-SIM / 0-NAO): ");
        scanf("%d", &opcao);

    } while(opcao == 1);

    return 0;
}
