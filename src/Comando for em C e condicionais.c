#include <stdio.h>
int main() 
{
     int x,y; 
     for (x = 10, y = 0; x >=0, y<= 10; x--, y++)
     {                                            //No exemplo, temos um programa que mostra uma sequência de números, onde x vai de 10 a 0 e y vai de 0 a 10.
         printf("x=%2d  y=%2d\n", x, y); // necessário somente um espaço para separar marcador 
     }
     
   return 0;
}
            // for (// x = 10,y = 0; // x >= 0, y <= 10; // x--,y++ //)   ''Na primeira expressão “x” tem o seu valor iniciado em “10” e “y” iniciado em “0”.''
           // Na segunda expressão o laço se repetirá enquanto x for maior ou igual a zero e enquanto y for menor ou igual a 10”.
           // Ao final da execução dos comandos do laço de repetição, x será decrementado de 1 e y será incrementado de 1.



//......................................


// ESTRUTURA DE REPETIÇÃO (DO WHILE) ABAIXO //

/*
#include <stdio.h>

int main ()
{
    int valor;
    printf("digite um valor para ser contado: ");
    scanf("%d",&valor);
    
    do {
        valor --;
        printf("%d\t",valor);
    }
    
    while (valor > 0);
    
    return 0;
} 

//---------------------------------------------------------

#include <stdio.h>
int main(){
    int parar_em = 30;
    for(int i = 0; i < 100; i++) {
        if (i == parar_em) {
            break;              // comando break pode ser utilizado para assim forçar a parada do loop do laço 
        }
        printf("%d ", i);
    }
    return 0;
}

// ---------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
int main() {
int a, b, c;
printf ("Classificação do triângulo: informe  a medida de cada lado:\n");
scanf("%d %d  %d", &a, &b, &c);
if (a<b + c && b<a + c && c < a + b)
           {
                    printf("\n\n Dadas as medidas: %d, %d, %d, temos um triângulo", a, b, c);
                    if (a == b && a ==c)
                    {
                    printf("Este é um triângulo EQUILÁTERO! \n");
                    }
                           else
                                  if (a == b || a == c || b == c)
                                   {
                                     printf("Este é um triângulo ISÓSCELES! \n");
                                      }
                                             else
                                                     printf("Este é um triângulo ESCALENO! \n");
              }
                     else
                     printf("\n\n Dadas as medidas: %d, %d, %d, não formam um triângulo", a, b, c);
 return 0;
} // algoritmo de analise e teste de formato de triangulos

*/