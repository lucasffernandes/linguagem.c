
#include <stdio.h>
           // INTRODUCAO A PONTEIROS...
int main() {
    int x;
    x = 10;
    //printf("%d",x); // acessando o valor da memoria
    //printf("%d",&x); // acessando o endereco da memoria
    return 0;
}

//---------------------------------------------
#include <stdio.h>
           // INTRODUCAO A PONTEIROS...
int main() {
    int x;
    x = 10;
    
    int *ponteiro;
    ponteiro = &x; //sem o & o ponteiro se torna uma variavel de armazenamento de x 
    
    //printf("%d\n",*ponteiro);// com o * sairá o valor do endereco da memoria
    //printf("%d\n",ponteiro);// sem o * sairá somente o endereco da memoria
    
    return 0;
}
// ------------------------------------
#include <stdio.h>

int main() {
    int x = 10;
    int *ponteiro;
    ponteiro = &x; // ponteiro ACESSANDO (COM &) o endereco de memoria x
    
    int y = 20;
    *ponteiro = y; // ponteiro RECEBENDO o valor do endereco de memoria y
    
    printf("%d,%d",x,y);
    
    return 0;
}
// -------------------------------------
#include <stdio.h>

int main() {
    int x = 10;
    double y = 20.30;
    char a = 'a';
    
    int *px = &x;
    double *py = &y;
    char *pa = &a;
    
    //printf("endereço de x: %d ... valor de x: %i\n", px,*px);
    //printf("endereco de y: %d ... valor de y: %f\n",py,*py);
    //printf("endereco de a: %d ... valor de a: %c\n",pa, *pa);
    // para printar o endereco de qualquer tipo de variavel é somente em %i ou %d de inteiros, caso contrario dara errado.
    double soma = *px + *py;
    printf("resultado = %.2f\n",soma);
    
    return 0;
}
// ------------------------------------
#include <stdio.h>
int main() {
    int z = 600;
    int l = 450;
    float r = 1.996;
    
    int *pz = &z;
    int *pl = &l;
    float *pr = &r;
    
    printf("endereco de z na memoria ram: %d .. valor de z: %d\n",pz,*pz);
    printf("endereco de l na memoria ram: %d .. valor de l: %d\n",pl,*pl);
    printf("endereco de r na memoria ram: %d .. valor de r: %.3f\n",pr,*pr);
    
    return 0;
}
// --------------------------------------

#include <stdio.h>

int main() {
    struct horario {
        int hora;
        int minuto;
        int segundo;
    };
    
    struct horario atual;
    struct horario *ponteiro = &atual;
    
    ponteiro->hora = 10;
    ponteiro->minuto = 20;
    ponteiro->segundo = 30;
    
    printf("%d:%d:%d",atual.hora,atual.minuto,atual.segundo);
    
    return 0;
}
// ---------------------
#include <stdio.h>

struct horario {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct horario atualizado,*ponteiro;
    ponteiro = &atualizado;
    
    ponteiro->hora = 10;
    ponteiro->minuto = 20;
    ponteiro->segundo = 30;
    
    printf("%d:%d:%d",atualizado.hora,atualizado.minuto,atualizado.segundo);
    return 0;
};
//-------------------
// calculo com utilizando ponteiros

struct horario {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct horario atualizado,*ponteiro;
    ponteiro = &atualizado;
    
    ponteiro->hora = 10;
    ponteiro->minuto = 20;
    ponteiro->segundo = 30;
    
    int soma = 100;
    atualizado.hora = soma * ponteiro->hora;
    atualizado.minuto = soma / ponteiro->minuto;
    atualizado.segundo = soma - ponteiro->segundo;
    
    printf("%d:%d:%d",atualizado.hora,atualizado.minuto,atualizado.segundo);
    return 0;
};
// --------------------------------------

// manipulacao de ponteiros

#include <stdio.h>

struct data {
    int *pDia;
    int *pMes;
    int *pAno;
};
int main() {
    struct data atuality;
    int pDia = 15;
    int pMes = 1;
    int pAno = 2023;
    
    atuality.pDia = &pDia;
    atuality.pMes = &pMes;
    atuality.pAno = &pAno;
    
    printf("%d,%d,%d",*atuality.pDia,*atuality.pMes,*atuality.pAno);

    *atuality.pDia = 73;
    *atuality.pMes = 21;
    *atuality.pAno = 2053;
    
    printf("%d:%d:%d",*atuality.pDia,*atuality.pMes,*atuality.pAno);
    
    return 0;
}
// -------------------

#include <stdio.h>

int main() {
    void funcaoV(int x);// funcao para modificar variavel(sem sucesso)
    void funcaoP(int *pX);//funcao para modificar variavel com ponteiros
    int num = 423;
    int *pNum = &num;
    
    funcaoP(pNum);
    printf("%d",num);
    
    return 0;
}
void funcaoV(int x) {
    ++x;
};
void funcaoP(int *pX) {
    ++*pX;
};

// underflow e overflow esta relacionado a transnbordamento de memoria...
   // uma variavel SHORT utiliza um tamanho menor de bits de armazenamento que uma int
   // ja uma variavel LONG utiliza um espacamento maior que uma inteira normal.
   // em casos de transbordamento de variavel (underflow||overflow), o resultado sai com erro de printagem.

// ------------------------------------

#include <stdio.h>

int main() {
    struct lista {
        int valor;
        struct lista *proximo;
    };
    struct lista membro1,membro2,membro3; // declarou 3 estruturas com 1 valor inteiro e um ponteiro apontando a outra estrutura do tipo lista
    struct lista *gancho = &membro1;
    
    membro1.valor = 10;
    membro2.valor = 20;
    membro3.valor = 30;
    
    membro1.proximo = &membro2;
    membro2.proximo = &membro3;
    membro3.proximo = (struct lista *)0; // estrutura nula ou valor nulo
    
    while(gancho != (struct lista *)0) {
        printf("%d\n",gancho->valor);
        gancho = gancho->proximo;
    };
    
    return 0; 
}
// outro exemplo...

#include <stdio.h>

int main() {
    struct lista {
        int valor;
        struct lista *ponteiro;
    };
    struct lista estrutura1,estrutura2,estrutura3;
    struct lista *gancho = &estrutura1; 
    
    estrutura1.valor = 50;
    estrutura2.valor = 100;
    estrutura3.valor = 200;
    
    estrutura1.ponteiro = &estrutura2;
    estrutura2.ponteiro = &estrutura3;
    estrutura3.ponteiro = (struct lista *)0;// estrutura nula,ou valor nulo
    
    while(gancho != (struct lista *)0) {
        printf("%d\n",gancho->valor);
        gancho = gancho->ponteiro;
    };
    
    return 0; 
}
// --------------------------------------

#include <stdio.h>

struct lista {
    int valor;
    struct lista *proximo;
};
struct lista *procurarValor(struct lista *ponteiroLista, int valor) {
    while(ponteiroLista != (struct lista *)0) {
        if(ponteiroLista->valor == valor){
            return(ponteiroLista);
        } else {
            ponteiroLista = ponteiroLista->proximo;
        };
    };
    return(struct lista *)0;
};
int main() {
    struct lista *procurarValor(struct lista *ponteiroLista, int valor);
    struct lista L1,L2,L3;
    struct lista *resultado,*gancho = &L1;
    int valor;
    
    L1.valor = 23;
    L2.valor = 24;
    L3.valor = 25;
    
    L1.proximo = &L2;
    L2.proximo = &L3;
    L3.proximo = 0;   // NULO
    
    printf("Digite um numero: ");
    scanf("%d",&valor);
    
    resultado = procurarValor(gancho,valor);
    if(resultado == (struct lista *)0) {
        printf("valor nao encontrado.");
    } else {
        printf("valor %d encontrado \n",resultado->valor);
    };
    
    return 0;
}
// another exemple:

#include <stdio.h>

struct lista {
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor) {
    while(pLista != (struct lista *)0) {
        if(pLista->valor == valor) {
            return(pLista);
        } else {
            pLista = pLista->proximo;
        };
    };
    return(struct lista *)0;
} ;

int main() {
    struct lista *procurarValor(struct lista *pLista, int valor);
    struct lista L1,L2,L3;
    struct lista *resultado,*gancho = &L1;
    int valor;
    
    L1.valor = 23;
    L2.valor = 24;
    L3.valor = 25;
    
    L1.proximo = &L2;
    L2.proximo = &L3;
    L3.proximo = 0;   // NULO
    
    printf("Digite um numero: ");
    scanf("%d",&valor);
    
    resultado = procurarValor(gancho,valor);
    if(resultado == (struct lista *)0) {
        printf("valor nao encontrado.");
    } else {
        printf("valor %d encontrado \n",resultado->valor);
    };
    
    return 0;
}

// ---------------------

#include <stdio.h>

int main() {
    char letras[3] = {'a','b','c'};
    char *ponteiro = &letras[1];
    printf("%p",ponteiro); // para saber o endereco de memoria exato utiliza-se %p
    return 0;
}

// ------
#include <stdio.h>

int main() {
    int vetor[3] = {1,2,3};
    int *ponteiro = &vetor[0];
    
    *ponteiro = 78;
    *(ponteiro + 1) = 12;
    *(ponteiro + 2) = 54;
    
    printf("%d\n%d\n%d",vetor[0],vetor[1],vetor[2]);
    
    return 0;
}
//---------------------------------------

#include <stdio.h>

int somarVetor(int vetor[],const int n) {
    int soma = 0;
    int *ponteiro;
    int *const finalVetor = vetor + n;// quando um vetor aponta para o outro vetor sem '&' o endereco altomaticamente cai pro primeiro valor da estrutura(0). nesse caso é o primeiro valor + n
    
    for(ponteiro = vetor  ; ponteiro < finalVetor; ++ponteiro) {
        soma += *ponteiro; // ou soma = soma + *ponteiro;
    };
    
    return soma;
    
};

int main() {
    int somarVetor(int vetor[],const int n);
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("a soma dos membros do vetor é: %d", somarVetor(vetor,10));
    
    return 0;
}
// -----------

//other exemple:

#include <stdio.h>

int somaVetores(int vetor[], int const n) {
    int soma = 0;
    int *ponteiro;
    int *const tamanhoVetor = vetor + n;
    
    for(ponteiro = vetor; ponteiro < tamanhoVetor; ++ponteiro) {
        soma += *ponteiro;
    };
    return soma;
};

int main() {
    int somaVetores(int vetor[], int const n);
    int vetor[5] = {1,43,65,43,46};
    
    printf("%d",somaVetores(vetor,5));
    
    return 0;
}
// -----------------------------
// manipulacao de strings com ponteiros...

#include <stdio.h>

void copiarString(char *copiarDaqui, char *colarAqui) {
    while(*copiarDaqui != '\0') {
        *colarAqui = *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;
    };
    *colarAqui = '\0';
    
};

int main() {
    void copiarString(char *copiarDaqui, char *colarAqui);
    char *string1[] = {"pao com mortadela"};
    char *string2[20];
    
    copiarString(string1,string2);
    printf("%s",*string2);
    
    return 0;
}
// ------------------------

#include <stdio.h>

void copiarStrings(char *copiarDaqui, char *colarAqui) {
    while(*copiarDaqui != '\0') {
        *colarAqui = *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;
    };
    *colarAqui = '\0'; //caso a impressao for impressa com caracteres de memoria a mais em erro, é necessario colocar o caractere nulo manualmente dessa forma;
};

int main(void) {
    void copiarStrings(char *copiarDaqui, char *colarAqui);
    char string1[] = "pao com linguica";
    char string2[20];
    
    copiarStrings(string1,string2);
    printf("%s",string2);
    
    return 0;
}
// --------------------------------------------------------------------
