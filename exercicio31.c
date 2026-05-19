#include <stdio.h>

int main() {
    int anos, cigarrosPorDia;
    float precoCarteira, totalGasto;

    printf("Digite a quantidade de anos que você fuma: ");
    scanf("%d", &anos);

    printf("Digite o número de cigarros que fuma por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Digite o preço da carteira de cigarros: ");
    scanf("%f", &precoCarteira);

    // Cada carteira tem 20 cigarros
    totalGasto = (anos * 365.0) * (cigarrosPorDia / 20.0) * precoCarteira;

    printf("Você já gastou aproximadamente R$ %.2f com cigarros.\n", totalGasto);

    return 0;
}
