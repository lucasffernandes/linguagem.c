#include <stdio.h>

int main() // função principal
{
    void imprimaMensagem(void); //necessário declarar a função antes de chama-la, caso contrario dará erro
    
    imprimaMensagem(); // chamada de função
    
    return 0;
}

void imprimaMensagem(void) {
    printf("boa noite!");
}

// -----------------------------------------------------

/*

#include <stdio.h>

int main()
{
    int somar();
    int resultado;
    
    resultado = somar();
    
    printf("o resultado da função é: %d.",resultado);
    
    return 0;
}

int somar() {
    return 2 + 3;
}

// ------------------------------------------------------

// função com ponteiro

#include <stdio.h>

int main()
{
    int aprendendo();
    printf("%d",aprendendo());
    
    return 0;
}

int aprendendo() {
    int ano = 2022;
    int *ponteiro = &ano;
    
    return *ponteiro;
}
// ----------------------------------------------------

// funcao com parametro:

#include <stdio.h>

int main()
{
    int subtracao(int a,int b,char nome[]);
    subtracao(50,10,"lucas romildo");
  // para todos os parametros é necessario declarar seu tipo   
    
    return 0;
}

int subtracao(int a,int b,char nome[]) {
    int resultado = a - b;
    
    printf("%s, o resultado de %d - %d = %d",nome,a,b,resultado);
    // %s para sequencia de strings
    // %c para caracteres individuais

    return 0;
}



// -----------------------------------------------------

#include <stdio.h>

int main()
{
    int *gerarRandomico();
    *gerarRandomico();
    int multi();
    multi();
    int subtracao();
    subtracao();
    
    
    return 0;
}

 int *gerarRandomico() {
        static int r[10];
        int a;
        for (a = 0; a < 10; a++) {
            r[a] = rand();
            printf("r[%d] = %d\n",a,r[a]);
            
        }
        return r;
        
    }
    
int multi() {
    int a,b,resultado;
    printf("\ninicio de programa para calculo de multiplicação...\n\n");
    printf("\ndigite o primeiro valor a ser multiplicado: ");
    scanf("%d",&a);
    printf("digite o segundo valor a ser multiplicado: ");
    scanf("%d",&b);
    resultado = a * b;
    
    printf("\no resultado da multiplicação de %d x %d = %d",a,b,resultado);
    printf("\n\nFIM DE PROGRAMA!!!\n\n");
    
    return 0;
    
    
}

int subtracao() {
    int c,d,resp;
    printf("inicio de programa para calculo de subtração...\n\n");
    printf("\ndigite o primeiro valor para a subtração: ");
    scanf("%d",&c);
    printf("digite o segundo valor para a subtração: ");
    scanf("%d",&d);
    resp = c - d;
    printf("\no resultado de %d - %d = %d",c,d,resp);
    printf("\n\nFIM DE PROGRAMA!!\n\n");
    
    return 0;

}
//------------------------------------------------------------

//funcao que retorna numeros entre 1 e 20 que sao divisiveis por 3 e 9
//caso ache o numero o comando break encerra o ciclo

#include <stdio.h>

int main() {
    int i;
    for (i = 1;i < 20; ++i) {
        if (i % 3 == 0 && i % 9 == 0) {
            printf("%d divisivel por 3 e 9\n",i);
            break;
        }
        else {
            printf("%d nao e\n",i);
        }
        
    }
    
    return 0;
}

//---------------------------------------------------------------

#include <stdio.h>

int main() // 'casting' é uma forma de trazer mais exatidao a resultados quebrados, pois mesmo que a variavel resultado esta preparada para receber um valor decimal, o compilador entende que duas variaveis inteiras devem resultar de suas operacoes valores inteiros
{
    int x = 10;
    int y = 4;
    float resultado = x / y;
    //float resultado = (float)x / y;
    
    printf("%f\n",resultado);
    
    return 0;
}
// -----------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

// criando duas funcoes: 1 para comparar se as duas strings sao iguais
// outra para receber uma string e verificar se ela esta armazenada no banco de dados

struct dicionario {
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[],const char palavra2[]) {
    int i = 0;
    while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
        ++i;
    };
    if (palavra1[i] == '\0' && palavra2[i] == '\0') {
        return true;
    } else {
        return false; // NÃÃO É POSSSSIVEEEEELLLLL!!!!!!
    };
};
 
 int procurarStrings(const struct dicionario lingua[],const char procurar[],const int numDepalavras) {
     
    bool compararStrings (const char palavra1[],const char palavra2[]); 
     
    int i = 0; 
    while (i < numDepalavras) {
        if (compararStrings(procurar,lingua[i].palavra)) {
            return i;
        } else {
            ++i;
        };
    };
    return -1;
 };

int main(void)
{
    int procurarStrings(const struct dicionario lingua[],const char procurar[],const int numDepalavras);
    const int NUMDEDEFINICOES = 7;// variaveis constantes por convencao sao declaradas todas em caixa alta.
    char palavra[20] = {'\0'}; //declarou que todos os elementos dessa string sao caracteres nulos.
    int resultadoPesquisa;
    const struct dicionario portugues[7] = 
    {{"pao","comida de farinha"},{"mortadela","comida de carne"},{"feijao","comida brasileira"},{"tropeiro","tipo de feijao"},{"queijo","de minas"},{"macarronada","tipico de vo"},{"pizza","tipico da italia"}};
    printf("Digite uma palavra: ");
    scanf("%s",&palavra);
    
    resultadoPesquisa = procurarStrings(portugues,palavra,NUMDEDEFINICOES);
    if (resultadoPesquisa != -1) {
        printf("%s\n",portugues[resultadoPesquisa].definicao);
    } else {
        printf("Palavra nao encontrada");
    };
    return 0;
};
// -------------------------------------
// TENTATIVA DANDO ERRO
#include <stdio.h>
#include <stdbool.h>

struct dicionario {
    char palavra[30];
    char definicao[60];
};

bool comparaStrings(char palavra1[],char palavra2[]) {

    if (palavra1 == palavra2) {
        return true;
    } else {
        return false;
    };
};

int main() 
{
    bool comparaStrings(char palavra1[],char palavra2[]);
    char palavraUsu[20];
    printf("Digite sua palavra: ");
    scanf("%s",&palavraUsu);
    
    struct dicionario y[5] = {{"carro","altomovel de 4 rodas"},{"bicicleta","veiculo de duas rodas"},{"moto","coisa de doido"},{"velotrou","para crianca"},{"quadriciclo","veiculo ideal para trilha"}};
    int i = 0;
    while (y.palavra[i] != '\0' && palavraUsu[i] != '\0' && y.palavra[i] == palavraUsu[i]) {
        i++;
    };
    if (comparaStrings(palavraUsu[i],y.palavra[i]) {
        printf("%s",y.definicao);
    } else {
        printf("Palavra não encontrada");
    };
    
    return 0;
};

*/