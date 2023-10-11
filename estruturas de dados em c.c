#include <stdio.h>

int main()
{
    int numero[5];             // formula de criação de vetores 
    numero[0] = 10;
    numero[1] = 20;
    numero[2] = 30;
    numero[3] = 40;
    numero[4] = 50;
    
    printf("numero[0]: %d\n",numero[0]);
    printf("numero[1]: %d\n",numero[1]);
    printf("numero[2]: %d\n",numero[2]);
    printf("numero[3]: %d\n",numero[3]);
    printf("numero[4]: %d\n",numero[4]);
    
    return 0;
}

// outra formula de criação de vetores

#include <stdio.h>

int main()
{
   int numero[5] = {1,2,3,4,5};
    
    printf("numero[0]: %d\n",numero[0]);
    printf("numero[1]: %d\n",numero[1]);
    printf("numero[2]: %d\n",numero[2]);
    printf("numero[3]: %d\n",numero[3]);
    printf("numero[4]: %d\n",numero[4]);

    return 0;
}


//...........................................





#include <stdio.h>

#define VET_TAM 5

int main () {
    int num[VET_TAM];  // VET_TAM SIGNIFICA 'TAMANHO DE VETOR'   
                                                     
    for (int i = 0; i < VET_TAM; i++) {   // armazenar velores em um vetor
        printf("\nEntre com um número: ");
        scanf("%d", &num[i]);
        printf("\nO valor digitado foi: %d", num[i]);
    }
    
    return 0;
}



#include <stdio.h>
#include <string.h> // biblioteca para a manipulação de strings

int main()
{
    char i,y, matriz[2][2] = { carro,bicicleta,  cavalo, cachorro };
    
    for (i = 0; i < 2; ++ i) {
        for (y = 0; y < 2; ++ y) {
            printf("matriz[%d][%d]:%d\n",i,y,matriz[i][y]);
        }
        printf("\n");
    }

    return 0;
    
}

#include <stdio.h> // biblioteca para entrada e saida de dados normal

int main()
{
    int i,j,matriz[5][5] = { 1,2,3,4,5, 6,7,8,9,10, 11,12,13,14,15,    16,17,18,19,20, 21,22,23,24,25 };
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("matriz[%d][%d]: %d\n",i,j,matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// ------------------------------------------------------------


#include <stdio.h> 

// algoritmo para preencher dados em uma matriz e imprimi-la

int main()
{
    int i,j, matriz[3][3];
    
    printf("Preencha os elementos da matriz...\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("preencha a matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            
        }
        printf("\n");
        
    }
     printf("\n\n******************* SAIDA DE DADOS **********************\n");

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: %d\n",i,j,matriz[i][j]);
                
        }
    }
    
    
    return 0;
    
    
}



// -------------------------------------------------------------

// tentativa de criar uma função altomatizando a criação de uma matriz

#include <stdio.h>
#include <string.h>

void main()
{
    int matriz(int x,int y);
    matriz(2,2);

}

int matriz(int x,int y) {
    int lista[x][y];
    int i,j;
    
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("digite o valor de preenchimento da lista em numero e nome...\n");
            printf("digite o numero: ");
            scanf("%d",&lista[i][j]); // a matriz sempre devera vir nos couchetes os indices para dar certo
            printf("\n");
        };
        
    };
    
    printf("************* saida de dados ***************\n");
    
    for(i = 0; i < x; i++) {
        for (j = 0;j < y; j++) {
            printf("\nmatriz[%d][%d]: %d",i,j,lista[i][j]);
        }
    }
    
    return lista[i][j];
}
// concatenação(juncao) de strings

#include <stdio.h>

int main() {
    void concatenar(char string1[],int t1,char string2[],int t2,char string3[]);
    char palavra1[] = {'g','a','l','o',' '};
    char palavra2[] = {'p','e'};
    char concatenacao[7];
    
    concatenar(palavra1,5,palavra2,2,concatenacao);
    int i;
    for(i = 0;i < 7;i++) {
        printf("%c",concatenacao[i]);
    }
    printf("\n");


    return 0;
}

void concatenar(char string1[], int t1, char string2[], int t2, char string3[]) { 
    
    int i,j;
    for(i = 0; i < t1; i++) {
        string3[i] = string1[i];
    }
    for (j = 0; j < t2; j++) {
        string3[t1  + (j-1) ] = string2[j];
    }
}