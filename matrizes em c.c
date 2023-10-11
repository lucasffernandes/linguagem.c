#include <stdio.h>

int main() {
    int linha, coluna;                         // Matrizes são arranjos de duas ou mais dimensões.
    int matriz[3][3];                           // Sintaxe: tipo variável [M] [N] . Onde, [M] representa a quantidade de linhas e [N] a quantidade de colunas.
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("\nDigitar os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }                                          // montar uma matriz 3 x 3, onde os valores são lançados de acordo com a linha e coluna. 
    }
    printf("\n\nVeja a sua Matriz\n");
    for (linha = 0; linha <= 2; linha++) {
        for (coluna=0;coluna<3;coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}

