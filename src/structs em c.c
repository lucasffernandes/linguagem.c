#include <stdio.h>

int main()  // struct é um tipo de variavel, que armazena variaveis de varios tipos
{
    struct data
    {
        int dia; // nao pode declarar vslores dentro da struct senao depois nao podera alterar
        int mes;
        int ano;
    };
    struct data atual;
    atual.dia = 06;
    atual.mes = 01;
    atual.ano = 2023;
    
    printf("%d,%d,%d",atual.dia,atual.mes,atual.ano);
    return 0;
}
// RELEMBRANDO... VARIAVEIS PRIMITIVAS SAO: INT,FLOAT,DOUBLE,CHAR... 'LONG' ALONGA UM ESPACAMENTO DE VARIAVEL, COSNTANTE É UM VALOR DE VARIAVEL IMUTAVEL
// --------------------------------------------------------------------------
/*
#include <stdio.h>

int main()
{
    struct data
    {
        int dia;
        int mes;
        int ano;
        double aleatorio; // variável double é semelhante a float so que apresenta uma maior precisao de casas decimais e de maior espacamento de memoria
        char letra;
    };
    struct data atual;
    atual.dia = 06;
    atual.mes = 01;
    atual.ano = 2023;
    
    struct data test1;
    test1.dia = 7;
    test1.mes = atual.mes + 11;
    test1.ano = atual.ano - 1;
    test1.aleatorio = 5*5/2;
    test1.letra = 'a';
    
    printf("%d\n",atual.dia);
    printf("%d\n",atual.mes);
    printf("%d\n",atual.ano);
    
    printf("%d\n",test1.dia);
    printf("%d\n",test1.mes);
    printf("%d\n",test1.ano);
    printf("%.1f\n",test1.aleatorio); // double se imprime em 'f'
    printf("%c\n",test1.letra);
    
    
    return 0;
}
//-------------------------------------------------------------------

#include <stdio.h>

struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main(void)
{
    struct horario teste (struct horario x);//declaracao de funcao
    
    struct horario agora;//declarei o valor da estrutura
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;
    
    struct horario proxima;
    proxima = teste(agora);
    
    printf("%d:%d:%d\n", proxima.horas,proxima.minutos,agora.segundos);
    // valor antes de ser alterado 
    return 0;
}

struct horario teste (struct horario x) {
    
    printf("%d:%d:%d\n",x.horas,x.minutos,x.segundos);
    
    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;
    //valor depois de ser alterado
    return x;
};

// --------------------------------------------------------------------

// praticando e com dó de apagar!!
#include <stdio.h>

struct data {
    int dia;
    int mes;
    int ano;
};
// nao esqueca dos ';' no final das declaraçoes de funcoes!!!!
int main() 
{
    struct data funcao (struct data x);
    
    struct data atual;
    atual.dia = 11;
    atual.mes = 11;
    atual.ano = 11;
    
    struct data armazenador;
    armazenador = funcao(atual);
    
    printf("%d:%d:%d\n",armazenador.dia,armazenador.mes,armazenador.ano);
    
    
    return 0;
};

struct data funcao (struct data x) {
    
    printf("%d:%d:%d\n",x.dia,x.mes,x.ano);
    
    x.dia = 12;
    x.mes = 12;
    x.ano = 12;
    return x;
};

// ----------------------------------------------------------------

//formas de declarar e manipular structs!!

#include <stdio.h>

int main() 
{
    struct data {
        int dia;
        int mes;
        int ano;
    }teste1,teste2,teste3;
    
    teste1.dia = 10;
    teste1.mes = 11;
    teste1.ano = 12;
    
    teste2.dia = 20;
    teste2.mes = 21;
    teste2.ano = 22;
    
    teste3.dia = 30;
    teste3.mes = 31;
    teste3.ano = 32;
    
    printf("%d:%d:%d\n",teste1.dia,teste1.mes,teste1.ano);
    printf("%d:%d:%d\n",teste2.dia,teste2.mes,teste2.ano);
    printf("%d:%d:%d\n",teste3.dia,teste3.mes,teste3.ano);
    
    return 0;
};

//------------

#include <stdio.h>

int main() 
{
    struct data {
        int dia;
        int mes;
        int ano;
    }teste1 = {10,11,12}; // caso declarar somente o valor 10, o restante ficara em 0
    
    
    printf("%d:%d:%d\n",teste1.dia,teste1.mes,teste1.ano);
  
    return 0;
}

//-------------

#include <stdio.h>
//formas de declarar e manipular structs!!
int main() 
{
    struct data {
        int dia;
        int mes;
        int ano;
    };
    
    //struct data teste1 = {10,11,12}; // se delarar somente um valor ou dois a variavel que ficar sem declaracao terminara em 0
    //struct data teste1 = {10,11,12};
    //struct data teste1 = {.dia = 20,.mes = 30,.ano = 40};
    //struct data teste1 = {.dia = 20};
    
    printf("%d:%d:%d\n",teste1.dia,teste1.mes,teste1.ano);

    
    return 0;
};
//-----------------------------------------------------------------

// vetores de estruturas

#include <stdio.h>
// vetores de structs!!
int main() 
{
    struct data {
        int dia;
        int mes;
        int ano;
    };
    struct data teste[5];
    teste[0].dia = 10;
    teste[0].mes = 20;
    teste[0].ano = 30;
    
    printf("%d:%d:%d\n",teste[0].dia,teste[0].mes,teste[0].ano);
    
    return 0;
};

//-----------------

#include <stdio.h>
// vetores de structs!!
int main() 
{
    struct data {
        int dia;
        int mes;
        int ano;
    };
    struct data teste[5] = {{10,20,30}, {40,50,60}, {70,80,90}, {100,110,120}, {130,140,150}};
    int i;
    for (i = 0;i < 5;i++) {
        printf("%d:%d:%d\n",teste[i].dia,teste[i].mes,teste[i].ano);
    };
    
    
    return 0;
};
//-----------

#include <stdio.h>

int main() 
{
    struct horario {
        int horas;
        int minutos;
        int segundos;
    };
    struct horario atual[3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    int i;
    for (i = 0; i < 3; i++) {
        printf("%d:%d:%d\n",atual[i].horas,atual[i].minutos,atual[i].segundos);
    };
    
    return 0;
};

//----------------------------------------------------
// exercicio em c "construcao de um vetor de estrutura com entrada e saida de dados "

#include <stdio.h>

struct horario {
    int horas;
    int minutos;
    int segundos;
};

int main() 
{
    void receberHoras(struct horario x[5]);
    void printarHoras(struct horario x[5]);
    struct horario usuario[5];
    receberHoras(usuario); // na argumentacao nao precisa colocar as '[]' do vetor ou de quaisquer estruturas, senao da erro
    printf("\n************Saida de dados************\n");
    printarHoras(usuario);
    
    return 0;
};

void receberHoras(struct horario x[5]) {
    int i;
    for(i = 0; i < 5; ++i) {
        printf("Preencha o %d horário em (hh:mm:ss): ",i + 1);
        scanf("%d:%d:%d",&x[i].horas,&x[i].minutos,&x[i].segundos);
    };
    
};

void printarHoras(struct horario x[5]) {
    int i;
    for (i = 0; i < 5; ++i) {
        printf("O %d horario digitado é: %d:%d:%d\n",i + 1,x[i].horas,x[i].minutos,x[i].segundos);
    };
    
    
};

*/