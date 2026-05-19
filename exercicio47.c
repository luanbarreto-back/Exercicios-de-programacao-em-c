#include <stdio.h>

int main() {
    int nFuncionarios = 1200;
    int produtos;
    float salarioFixo, salario, somaSalarios = 0, maiorSalario = 0, mediaSalarios;

    for (int i = 1; i <= nFuncionarios; i++) {
        printf("Funcionário %d\n", i);
        printf("Salário fixo: ");
        scanf("%f", &salarioFixo);

        printf("Quantidade de produtos vendidos: ");
        scanf("%d", &produtos);

        // Calcula comissão por produto
        float comissaoPorProduto;
        if (produtos <= 5) comissaoPorProduto = 1.50;
        else if (produtos <= 50) comissaoPorProduto = 2.00;
        else comissaoPorProduto = 2.50;

        salario = salarioFixo + produtos * comissaoPorProduto;
        somaSalarios += salario;

        if (salarioFixo > maiorSalario) {
            maiorSalario = salarioFixo;
        }

        printf("Salário do funcionário %d: R$ %.2f\n\n", i, salario);
    }

    mediaSalarios = somaSalarios / nFuncionarios;
    printf("Média dos salários pagos: R$ %.2f\n", mediaSalarios);
    printf("Maior salário fixo: R$ %.2f\n", maiorSalario);

    return 0;
}
