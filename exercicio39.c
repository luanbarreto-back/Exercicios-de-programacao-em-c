#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica * (1 + 0.28 + 0.45); // 28% distribuidor + 45% impostos

    printf("Custo ao consumidor: R$ %.2f\n", custoConsumidor);

    return 0;
}
