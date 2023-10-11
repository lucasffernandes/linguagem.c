#include <stdio.h>
int main() {                           // Uma instrução continue dentro de um laço possibilita que a execução de comandos corrente seja terminada, passando à próxima iteração do laço.
    for (int i = 1; i <= 30; i++) {    // No exemplo a seguir, temos um programa que percorrerá os números de 1 a 30 e neste percurso, irá testar se foi digitado algum número ímpar, caso seja ímpar o programa continua o teste até o fim do laço.
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    
}
