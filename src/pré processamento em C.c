//um pouco de pré-processador

#include <stdio.h>

//no pre-processamento tem como definir variaveis antes de o compilador interpretar a funcao principal
#define PI 3.14159 
#define NULO 0

double calculoArea(double raio) {
    return raio * raio * PI;
};

int main(void) {
    double calculoArea(double raio);
    double raio;
    int i = 3;
    
    while(i != NULO) {
        printf("Digite o raio: ");
        scanf("%lf",&raio);// para armazenar e printar o valor em double é necesario colocar o % juntamente com: 'l(L minusculo) junto com f.
        --i;
        printf("O resultado do calculo da area é: %lf\n",calculoArea(raio));
    };
    
    return 0;
}
// -----------------------------------------

/*

#include <stdio.h>

#define NUMERO_DE_ALUNOS 9839

int main(void) {
    void primeiraFuncao();
    void segundaFuncao();
    void terceiraFuncao();
    
    primeiraFuncao();
    segundaFuncao();
    terceiraFuncao();
    
    return 0;
}
void primeiraFuncao() {
    printf("%d\n",NUMERO_DE_ALUNOS);
};
void segundaFuncao() {
    printf("%d\n",NUMERO_DE_ALUNOS);
};
void terceiraFuncao() {
    printf("%d\n",NUMERO_DE_ALUNOS);
};
// ----------------------------

#include <stdio.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
#define CALCULO_AREA(RAIO) RAIO * RAIO * PI // MACRO

// utulizacao de macros, macro é uma funcao definida no pre-procesamento para ser utilizada em todo o programa de uma form amais eficiente.

int main() {
    int R = 10;
    
    printf("%f\n",PI);
    printf("%f\n",DOIS_PI);
    printf("%f\n",CALCULO_AREA(R));// || somete utilizando o macro com numeros tambem dá certo.
    
    return 0;
};
// --------------------------

#include <stdio.h>

#define MACRO(x,y) x > y ? x : y
// macro verifica se x é maior que y, se sim executa x se nao (depois dos :) executa o y.
#define VERIFICA_LETRA(LETRA) LETRA > 'a' && LETRA < 'z'

int main() {
    char x;
    printf("digite sua letra: ");
    scanf("%c",&x);
    
    if(VERIFICA_LETRA(x)) {
        printf("%c é uma letra\n",x);
    } else {
        printf("nao e uma letra");
    };
    
    printf("\no maior numero é: %d\n",MACRO(345,5443));
    
    return 0;
}
// --------------------------------
#include <stdio.h>

#define MACRO(X,Y) X > Y ? X : Y
#define VERIFICA_LETRA(LETRA) LETRA >= 'a' && LETRA <= 'z' || LETRA >= 'A' && LETRA <= 'Z'

int main() {
    char x;
    printf("digite sua letra: ");
    scanf("%c",&x);
    
    if(VERIFICA_LETRA(x)) {
        printf("e uma letra\n");
    } else {
        printf("o valor digitado nao e uma letra \n");
    };
    
    printf("%d\n",MACRO(10,20));
    
    return 0;
}

// --------------------------------

// Criacao de arquivo na areia de trabalho

#include <stdio.h>

int main() {
    
    FILE *file; //ponteiro apontando para o arquivo file
    file = fopen("Disco local (C;)//Usuários//Usuario//teste.txt","w");//funcao q faz com que o ponteiro aponte para um arquivo no meu programa
    // recebe duas strings como argumento, o local e o nome do arquivo
    // o segundo argumeto recebe uma letra das (tres: w(wreater ESCREVER),r(read LER),a(append ALTERAR), que definem como o arquivo se comportara no sistema)
    fprintf(file,"iaiaô"); // funcao que recebe como argumto duas coisas. a primeira é ponteiro do tipo FILE, O segundo é uma mensagem a seer colocada.
    fclose(file);// funcao que permite fechar o arquivo
    
    return 0;
}

// -----------------------------

#include <stdio.h>
#include <stdlib.h>

// programa que LER (COM O COMADNO R) tres propriedades numericas numa pasta criada em arquivo txt.

int main() {
    
    FILE *pFile;
    pFile = fopen("nome do arquivo.txt","r"); //ou o nome do diretorio copiado com duas barras '//' em vez de uma
    
    int x,y,z;
    
    fscanf((pFile,"%d %d %d",&x,&y,&z));
    printf("%d %d %d\n",x,y,z);
    
    fclose(pFile);
    
    return 0;
}
//--------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pFile;
    pFile = fopen("nome do arquivo.txt","r");//read
    
    if(pFile == NULL) {
        printf("nao foi possivel abrir o aquivo");
        getchar();//comando de encerramento caso de pal no compilador
        exit(0);
    };
    
    char frase[100];
    
    while(fgets(frase,100,pFile) != NULL) {
        printf("%s",frase);
    };
    
    fclose(pFile);
    
    
    
    return 0;
}

// ---------------------------

// programa que acessa o conteudo de um arquivo .txt na area de trabalho
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pFile;
    pFile = fopen("nome do arquivo.txt","r");//read
    
    if(pFile == NULL) {
        printf("nao foi possivel abrir o aquivo\n");
        
        return 0;
    };
    
    char c [1000];
    
    fscanf(pFile,"%s",c);
    printf("%s",pFile);
    
    fclose(pFile);
    
    return 0;
}

// ------------------------------

#include <stdio.h>
#include <stdlib.h>

// programa para se adicionar frase,vetores e caracteres em um arquivo.txt

int main() {

    FILE *ponteiro;
    ponteiro = fopen("teste.txt","a"); //(a) anexar um arquivo para escrever

    if(ponteiro == NULL) { //se nao estiver nada no arquivo
        printf("arquivo nao pode ser aberto");
        exit(1);
    }

    fprintf(ponteiro,"galo\n");

    char frase[] = "nova linha\n";
    fputs(frase,ponteiro);

    char caractere = '3';
    fputc(caractere, ponteiro);

    fclose(ponteiro);

    return 0;
}

// ----------------------------

// PROGRAMA PARA COPIAR UM ARQUIVO E ENVIAR PARA O OUTRO

#include <stdio.h>

int main() {

    void copiarConteudo(FILE *pont1, FILE *pont2);

    FILE *pont1 = fopen("teste.txt","r");

    if(pont1 == NULL) {
        printf("nao foi possivel abrir o arquivo");
        return 1;
    };

    FILE *pont2 = fopen("teste2.txt","w");// fopen é uma funcao que abre o arquivo, e seu segundo argumento sinaliza o que sera feito com o arquivo aberto.

    copiarConteudo(pont1,pont2);

    fclose(pont1);
    fclose(pont2);

    return 0;
}

void copiarConteudo(FILE *pont1, FILE *pont2) {
    char leitor[1000];

    while(fgets(leitor,1000,pont1) != NULL); //fgets funcao que pega um arquivo e copia seu conteudo, e tem como primeiro e segundo argumento a estrutura de destino e o seu tamanho

    fputs(leitor,pont2); // funcao que recebe o endereco do vetor de caracteres e o ponteiro file de destino para o conteudo a ser copiado.

};

//------------------------------------

// COMANDOS STDIN PARA ENTRADA DE DADOS VIA TECLADO

#include <stdio.h>

int main() {
    char x[100];

    fgets(x,100,stdin);
    printf("%s",x);

    return 0;
}

//---------------

#include <stdio.h>

int main() {

    char x[100];
    
    freopen("C:\\Users\\Usuario\\Documents\\Visual Studio 2022\\teste.txt","r",stdin);
    fgets("x",100,stdin);
    printf("%s",x);

    return 0;
}

//---------------

#include <stdio.h>

int main() {
    char x[100];

    FILE *file = fopen("teste.txt","r");

    fgets(x,100,file);
    printf("%s\n",x);

    freopen("teste.txt","r",file);
    fgets(x,100,file);
    printf("%s\n",x);

    return 0;
}

////////-------------------------------

// ESSEPROGRAMA PEGA NAO SOMENTE a primteira frase do passageito mais itera e exibe tudo digitadp
#include <stdio.h>

int main() {

    char x[100];

    int i = 0;
    while((x[i] = fgetc(stdin)) != '\n') {
        ++i;
    };

    x[++i] = '\0';


    return 0;
}

// ----------------------------
#include <stdio.h>

int main() {

    char x[100];

    FILE *file = fopen("teste.txt","r");
    
    int i = 0;
    while((x[i] = fgetc(file)) != EOF) {
        ++i;
    };

    x[i] = '\0';

    printf("%s",x);

    return 0;
}
//-----------------------

#include <stdio.h>

int main() {

    char x[] = "cabrito";

    FILE *ponteiro = fopen("teste2.txt", "w");

    fputc(x[4],ponteiro); // putc e fputc sao a mesma coisa, mais putc pode ser utilizada como macro.
                       // funcao que escreve o primeiro valor utilizando o segundo argumento como destino

    return 0;
}

// stdout é um comando que registra na saida do terminal o comando a ele vinculado

// ------------------------------------------

// PROGRAMA PARA PASSAR UMA STRING COMPLETA PARA OUTRA ESTRUTURA


#include <stdio.h>

int main() {

    char x[] = "cabrito";

    FILE *ponteiro = fopen("teste2.txt", "w");

    int i = 0;
    while(x[i] != '\0') {
        fputc(x[i], ponteiro); //// putc e fputc sao a mesma coisa, mais putc pode ser utilizada como macro.
        ++i;
    };
    
    return 0;
}
//----------------

#include <stdio.h>

int main() {

    char x[10];

    gets(x);

    printf("%s", x);

    return 0;
}

// gets() é uma funcao insegura para o programa. a funcao melhor é a fgets.
// dentre seus principais motivos que a torna insegura para o programa é de nao respeitar o espaco de armazenamento atribuido nas variaveis na memoria RAM

//-----------------

// UTILIZACAO DA FUNCAO PUTS()... BASICAMENTE UM APRIMORAMENTO DO PRINTF

#include <stdio.h>

int main() {

    char x[] = "casa";

    puts("braboleta");

    return 0;
}

// -----------------------------------

#include <stdio.h>

//PROGRAMA QUE PEGA UMA STRING DO USUARIO E NA SAIDA IMPRIME O VALOR DIGIADO

int main() {

    char x[10];

    int i = 0;
    while((x[i] = getchar()) != '\n' && i < 8) { // necessario dois parenteses para fazer comparacoes
        ++i;
    };
// y recebe o valor digitado pelo usuario pelo getchar()
    x[++i] = '\0';

    printf("%s",x);

    return 0;
}
// -----------------------

#include <stdio.h>

// OUTRO PROGRAMA PARA ENTRADA DE DADOS DE FORMA PADRAO
int main() {

    char x;

    while((x = getchar()) != 'n') {
        putchar(x);
    };
    
    return 0;
}

// -------------------------

#include <stdio.h>

// PROGRAMA PARA LIMPEZA DE BUFFER

int main() {

    void limparBuffer(void);

    char a,b,c;
    a = getchar();
    limparBuffer();
    b = getchar();
    limparBuffer();
    c = getchar();
    limparBuffer();

    printf("%c",a);
    printf("%c",b);
    printf("%c",c);

    return 0;
}

void limparBuffer(void) {
    char c;
    while((c = getchar()) != '\n' && c != EOF);
};

// -------------------------------------------------------

// INTRODUCAO A ALOCACAO DINAMICA DE MEMORIA!!!

#include <stdio.h>
#include <stdlib.h>
 
 struct x {
    int a;
    int b;
    int c;
 };

 int main() {

    int x;
    double y;
    char z;

    //printf("%li\n",sizeof(x));
    //printf("%li\n",sizeof(y));
    //printf("%li\n",sizeof(z));

    //printf("%li",sizeof(long)); // size of recebe QUALQUER TIPO de variavel ou um tipo de dado para retornar seu tamanho

    //int vetor[10];
    //printf("%li",sizeof(vetor));

    struct x estrutura;
    printf("%li",sizeof(estrutura));

    return 0;
 }

// -----------------

#include <stdio.h>
#include <stdlib.h>
// MALLOC ALOCA DINAMINCAMENTE O DESTINO DELIMADO PELA FUNCAO SIZEOF
int main() {

    int *p = (int *)malloc(sizeof(int)); 

    *p;

    printf("%d",*p);

    size_7
    return 0;
}

// ------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *)malloc(sizeof(int));

    *p = 1000;

    free(p); // funcao que desaloca o espaco de memoria exigido pela funcao malloc 

    printf("%d",*p);

    return 0;
}

//---------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *)calloc(5,sizeof(int)); // calloc recebe dois argumentos o segundo especifica o tipo de dado a ser armazenado, e o primeiro é o numero inteiro especificando o numero de tipos dele que usaremos na alocacao
    //casting para mudar o tipo do endereco de memoria caso o lixo que exista ali seja diferente de inteiro e de algum eventual erro no programa
    *p = 1000;
    
    free(p); // funcao que desaloca o espaco de memoria exigido pela funcao malloc 


    printf("%d",*p);

    return 0;
}
// diferente de calloc a funcao malloc nao inicializa a alocacao em 0, o calloc ja da ao sistema operacional o comando do espaco necessario e ja inicializa a alocacao em 0, e sem lixo na memoria.



//-------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *)calloc(5,sizeof(int)); // calloc recebe dois argumentos o segundo especifica o tipo de dado a ser armazenado, e o primeiro é o numero inteiro especificando o numero de tipos dele que usaremos na alocacao

                // formas de declarar ponteiros...
    //p[0] = 150;
    //p[1] = 12;
    //p[2] = 25;
    //p[3] = 75;
    //p[4] = 129;
                // ooou...
    *(p+0) = 10;
    *(p+1) = 20;
    *(p+2) = 30;
    *(p+3) = 40;
    *(p+4) = 50;

    printf("%d\n",p[0]);
    printf("%d\n",p[1]);
    printf("%d\n",p[2]);
    printf("%d\n",p[3]);
    printf("%d\n",p[4]);

    return 0;
}
// ----------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int *)calloc(5,sizeof(int)); // calloc recebe dois argumentos o segundo especifica o tipo de dado a ser armazenado, e o primeiro é o numero inteiro especificando o numero de tipos dele que usaremos na alocacao

    int i;
    for(i = 0; i < 5; ++i) {
        printf("Endereco de p%d = %p | valor de p%d = %d\n",i,(p+1),i,*(p+1)); // no endereco de memoria(diferente do acesso ao valpor de momoria *), pode ser utilizado &p[e a posicao a ser acessada] 
    };

    return 0;
}

*/

