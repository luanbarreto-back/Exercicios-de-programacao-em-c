#include <stdio.h>

int main() {
    int dias, contMais20 = 0;
    int totalHospedes = 0;
    float valor, desconto, somaValores = 0;
    int somaDias = 0;
    float maiorConta = 0;

    const float diaria = 150.0;

    printf("Informe a quantidade de dias de permanência de cada hóspede (0 para terminar):\n");

    while (1) {
        printf("Dias: ");
        scanf("%d", &dias);

        if (dias == 0) {
            break; // termina o programa quando o usuário digita 0
        }

        totalHospedes++;
        somaDias += dias;

        // Calcula o desconto
        if (dias <= 5) {
            desconto = 0.05;
        } else if (dias <= 10) {
            desconto = 0.10;
        } else {
            desconto = 0.15;
        }

        valor = diaria * dias * (1 - desconto);
        somaValores += valor;

        if (dias > 20) {
            contMais20++;
        }

        if (valor > maiorConta) {
            maiorConta = valor;
        }

        printf("Valor a pagar pelo hóspede: R$ %.2f\n\n", valor);
    }

    if (totalHospedes > 0) {
        printf("\nResumo:\n");
        printf("Quantidade de hóspedes que ficou mais de 20 dias: %d\n", contMais20);
        printf("Média do valor das contas pagas: R$ %.2f\n", somaValores / totalHospedes);
        printf("Média de dias de permanência: %.2f\n", (float)somaDias / totalHospedes);
        printf("Maior conta paga: R$ %.2f\n", maiorConta);
    } else {
        printf("Nenhum hóspede registrado.\n");
    }

    return 0;
}
