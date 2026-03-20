#include <stdio.h>

int main() {
    int continuar;
    double largura, comprimento, area, areaTotal = 0;

    do {
        printf("Digite a largura do comodo: ");
        scanf("%lf", &largura);
        printf("Digite o comprimento do comodo: ");
        scanf("%lf", &comprimento);

        area = largura * comprimento;
        areaTotal += area;

        printf("Deseja adicionar outro comodo? (1-SIM / 0-NAO): ");
        scanf("%d", &continuar);

    } while(continuar == 1);

    printf("Area total da residencia: %.2lf\n", areaTotal);
    return 0;
}
