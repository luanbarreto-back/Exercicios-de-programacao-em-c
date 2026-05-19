#include <stdio.h>

int main() {
    float kmInicio, kmFim, litros, precoCombustivel, kmRodados, kmPorLitro, custo;

    printf("Digite a quilometragem inicial: ");
    scanf("%f", &kmInicio);

    printf("Digite a quilometragem final: ");
    scanf("%f", &kmFim);

    printf("Digite a quantidade de litros gastos: ");
    scanf("%f", &litros);

    printf("Digite o preço do combustível por litro: ");
    scanf("%f", &precoCombustivel);

    kmRodados = kmFim - kmInicio;
    kmPorLitro = kmRodados / litros;
    custo = litros * precoCombustivel;

    printf("Quilometragem rodada: %.2f km\n", kmRodados);
    printf("Consumo do veículo: %.2f km/l\n", kmPorLitro);
    printf("Custo da viagem: R$ %.2f\n", custo);

    return 0;
}
