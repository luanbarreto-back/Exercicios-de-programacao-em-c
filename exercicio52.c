#include <stdio.h>

int main() {
    int idade, acidente;
    float salarioBruto, salarioLiquido;
    int totalAcidentes = 0, somaIdadeAcidentes = 0;
    float somaSalariosLiquidos = 0;

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o salário bruto (negativo para sair): ");
        scanf("%f", &salarioBruto);

        if (salarioBruto < 0) break;

        printf("Teve acidente de trabalho? (1-Sim / 0-Não): ");
        scanf("%d", &acidente);

        if (salarioBruto > 1500.0) {
            salarioLiquido = salarioBruto * 0.90; // 10% IR
        } else {
            salarioLiquido = salarioBruto;
        }

        somaSalariosLiquidos += salarioLiquido;

        if (acidente == 1) {
            somaIdadeAcidentes += idade;
            totalAcidentes++;
        }
    }

    if (totalAcidentes > 0) {
        printf("Média de idade das pessoas com acidente de trabalho: %.2f anos\n", 
               (float)somaIdadeAcidentes / totalAcidentes);
    } else {
        printf("Nenhuma pessoa sofreu acidente de trabalho.\n");
    }

    printf("Total de salários líquidos pagos: R$ %.2f\n", somaSalariosLiquidos);

    return 0;
}
