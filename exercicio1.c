
#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

2)
#include <stdio.h>

int main() {
    for(int i = -1; i >= -5; i--) {
        printf("%d\n", i);
    }
    return 0;
}

3)
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    return 0;
}

4)
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    return 0;
}

5)
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Sucessor: %d\n", n + 1);
    return 0;
}

6)
#include <stdio.h>
#include <math.h>

int main() {
    double n;
    printf("Digite um numero: ");
    scanf("%lf", &n);
    printf("Raiz quadrada: %.2lf\n", sqrt(n));
    return 0;
}

7)
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Quadrado: %d\n", n * n);
    return 0;
}

8)
#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("%.2lf elevado a %.2lf = %.2lf\n", a, b, pow(a, b));
    printf("%.2lf elevado a %.2lf = %.2lf\n", b, a, pow(b, a));
    return 0;
}

9)
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Resto da divisao: %d\n", a % b);
    return 0;
}

10)
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Quociente da divisao inteira: %d\n", a / b);
    return 0;
}

11)
#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0, zeros = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > 0) positivos++;
        else if(n < 0) negativos++;
        else zeros++;
    }
    printf("Positivos: %d\nNegativos: %d\nZeros: %d\n", positivos, negativos, zeros);
    return 0;
}

12)
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Proximos 10 numeros pares:\n");
        for(int i = 1; i <= 10; i++) {
            printf("%d ", n + 2*i);
        }
        printf("\n");
    } else {
        printf("O numero nao e par.\n");
    }
    return 0;
}

13)
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("5 sucessores:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", n + i);
    }
    printf("\n");
    return 0;
}

14)
#include <stdio.h>

int main() {
    int n;
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        printf("Numero lido: %d\n", n);
    }
    return 0;
}

15)
#include <stdio.h>

int main() {
    float n, soma = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &n);
        soma += n;
    }
    printf("Media: %.2f\n", soma / 5);
    return 0;
}

16)
#include <stdio.h>

int main() {
    int idade, soma = 0;
    for(int i = 0; i < 3; i++) {
        printf("Digite a idade %d: ", i+1);
        scanf("%d", &idade);
        soma += idade;
    }
    printf("Media das idades: %.2f\n", soma / 3.0);
    return 0;
}

17)
#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Digite os catetos do triangulo: ");
    scanf("%lf %lf", &a, &b);
    printf("Hipotenusa: %.2lf\n", sqrt(a*a + b*b));
    return 0;
}

18)
#include <stdio.h>

int main() {
    int n = 4;
    printf("Tabuada do 4:\n");
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}

19)
#include <stdio.h>

int main() {
    int n, positivos = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > 0) positivos++;
    }
    printf("Quantidade de numeros positivos: %d\n", positivos);
    return 0;
}

20)
#include <stdio.h>

int main() {
    int n, pares = 0, impares = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}

21)
#include <stdio.h>

int main() {
    int a, b, produto = 0;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    for(int i = 0; i < b; i++) { // somar 'a', 'b' vezes
        produto += a;
    }

    printf("Produto (usando soma sucessiva): %d\n", produto);
    return 0;
}

22)
#include <stdio.h>

int main() {
    int num, opcao;

    do {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &num);

        for(int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }

        printf("Deseja continuar? (1-SIM / 0-NAO): ");
        scanf("%d", &opcao);

    } while(opcao == 1);

    return 0;
}

23)
#include <stdio.h>

int main() {
    double altura, somaMulheres = 0;
    int sexo, homens = 0, mulheres = 0, abaixo168 = 0;
    double maior = 0, menor = 0;
    int primeiro = 1;

    while(1) {
        printf("Digite altura (0 ou menor para encerrar): ");
        scanf("%lf", &altura);
        if(altura <= 0) break;

        printf("Digite sexo (1-masculino, 2-feminino): ");
        scanf("%d", &sexo);

        if(primeiro) {
            maior = menor = altura;
            primeiro = 0;
        } else {
            if(altura > maior) maior = altura;
            if(altura < menor) menor = altura;
        }

        if(sexo == 1) homens++;
        else if(sexo == 2) {
            mulheres++;
            somaMulheres += altura;
            if(altura < 1.68) abaixo168++;
        }
    }

    printf("Maior altura: %.2lf\nMenor altura: %.2lf\n", maior, menor);
    printf("Numero de homens: %d\n", homens);
    if(mulheres > 0)
        printf("Media de altura das mulheres: %.2lf\n", somaMulheres / mulheres);
    else
        printf("Nao houve mulheres.\n");
    if(mulheres > 0)
        printf("Percentual de mulheres abaixo de 1.68: %.2lf%%\n", (abaixo168 * 100.0) / mulheres);

    return 0;
}

24)
#include <stdio.h>

int main() {
    double soma = 0;

    for(int i = 1; i <= 50; i++) {
        soma += (51 - i) / (double)i; // 50/1, 49/2, ..., 1/50
    }

    printf("Somatorio: %.2lf\n", soma);
    return 0;
}

25)
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

26)
#include <stdio.h>

// Função que imprime a sequência
void imprimirSequencia(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    imprimirSequencia(n);

    return 0;
}

27)
#include <stdio.h>

int main() {
    int N;

    while(1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &N);
        if(N == 0) break;

        int soma = 0, contador = 0, impar = 1;

        while(soma < N) {
            soma += impar;
            impar += 2;
            contador++;
        }

        if(soma == N) {
            printf("A raiz quadrada de %d é %d\n", N, contador);
        } else {
            printf("%d nao é um quadrado perfeito.\n", N);
        }
    }

    return 0;
}

28)
#include <stdio.h>

int main() {
    double altura, somaMulheres = 0, somaTotal = 0;
    int sexo, totalMulheres = 0, totalHomens = 0;
    int abaixo165 = 0;

    for(int i = 1; i <= 50; i++) {
        printf("Pessoa %d\n", i);
        printf("Digite a altura: ");
        scanf("%lf", &altura);
        printf("Digite o sexo (0=masc, 1=fem): ");
        scanf("%d", &sexo);

        somaTotal += altura;

        if(sexo == 0) {
            totalHomens++;
        } else if(sexo == 1) {
            totalMulheres++;
            somaMulheres += altura;
            if(altura < 1.65) abaixo165++;
        }
    }

    printf("\nResultados:\n");
    if(totalMulheres > 0)
        printf("Media de altura das mulheres: %.2lf\n", somaMulheres / totalMulheres);
    else
        printf("Nao houve mulheres.\n");

    printf("Media de altura da populacao: %.2lf\n", somaTotal / 50);
    printf("Percentual de homens: %.2lf%%\n", (totalHomens * 100.0) / 50);
    printf("Quantidade de mulheres: %d\n", totalMulheres);
    if(totalMulheres > 0)
        printf("Percentual de mulheres abaixo de 1.65 m: %.2lf%%\n", (abaixo165 * 100.0) / totalMulheres);

    return 0;
}

29)
