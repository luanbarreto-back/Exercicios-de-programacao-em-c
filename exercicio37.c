#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int horasTrabalhadas, dependentes;
    float salarioBruto, desconto, salarioLiquido;

    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", nome);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    salarioBruto = (horasTrabalhadas * 3.0) + (dependentes * 100.0);
    desconto = salarioBruto * 0.135;
    salarioLiquido = salarioBruto - desconto;

    printf("Funcionário: %s\n", nome);
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
