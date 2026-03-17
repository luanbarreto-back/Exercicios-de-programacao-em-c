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
