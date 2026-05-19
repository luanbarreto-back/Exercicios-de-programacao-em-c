#include <stdio.h>

int main() {
    int codigo, carrosVendidos;
    char nome[50];
    float valorTotalVendas, salarioFixo, valorPorCarro, salarioMensal;

    printf("Digite o código do vendedor: ");
    scanf("%d", &codigo);

    printf("Digite o nome do vendedor: ");
    scanf(" %[^\n]", nome);

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor recebido por carro vendido: ");
    scanf("%f", &valorPorCarro);

    salarioMensal = salarioFixo + (carrosVendidos * valorPorCarro) + (0.05 * valorTotalVendas);

    printf("\nCódigo do vendedor: %d\n", codigo);
    printf("Nome do vendedor: %s\n", nome);
    printf("Salário mensal: R$ %.2f\n", salarioMensal);

    return 0;
}
