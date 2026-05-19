#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, potenciaLampada, area, wattsNecessarios;
    int numLampadas;

    printf("Digite a largura do cômodo (m): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do cômodo (m): ");
    scanf("%f", &comprimento);

    printf("Digite a potência de cada lâmpada (W): ");
    scanf("%f", &potenciaLampada);

    area = largura * comprimento;
    wattsNecessarios = area * 18; // 18 W por m²

    numLampadas = (int) ceil(wattsNecessarios / potenciaLampada);

    printf("Número de lâmpadas necessárias: %d\n", numLampadas);

    return 0;
}
