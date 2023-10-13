
#include <stdio.h>

int main()
{
    //char palavra[6] = {'B','r','a','s','i','l'};
    //char palavra[] = {'B','r','a','s','i','l'};
    //char palavra[7] = {"Brasil"};
    //char palavra[] = {"Brasil"};
    char palavra[] = "Brasil";
    
 // ** \o <- caractere nulo    
// ** \0 representa o fim de uma string sequencial para o compilador
//** \ ** somente a barra não significa nada para o compilador na leitura

     printf("%s",palavra);
     
     
     return 0;
}


// concatenação(juncao) de strings

/*

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

//-----------------------------------------------------------

#include <stdio.h>

int main(void)
{
    int tamanhoString(char string[]);
    char stringUsuario[20];
    
    printf("digite sua string: ");
    scanf("%s",&stringUsuario);
    
    int num = tamanhoString(stringUsuario);
    printf("a string %s possui %d caracteres sem o caractere nulo .",stringUsuario,num); // ** \0 **
    
    
    return 0;
}
// caractere nulo "\0" é o ultimo caractere de toda string, ele simboliza o fim de uma sequencia de caracteres delimitada pelo compilador
int tamanhoString(char string[]) {
    int numCaracteres = 0;
    while (string[numCaracteres] != '\0') {
        ++numCaracteres;
    }

    return numCaracteres;
}

//----------------------------------------------------------------

#include <stdio.h>

int main(void)
{
    _Bool stringsIguais(char s1[],char s2[]);
    // bool retorna true ou folse, onde true = 1 and folse = 0 //

    if (stringsIguais("barco","marco")) {
        printf("sao iguais");
    }
    else {
        printf("nao sao iguais");
    }
    
    return 0;
}

_Bool stringsIguais(char s1[],char s2[]) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }
    // quando o while terminar a variavel 'i' tera o valor final da string(mais o nulo), no caso do argumento for "casa" o comando terminara com i em 5.
    // se comando while rodar as duas strings sem 'barrar'nenhuma ate o caractere nulo, entao as duas strings sao iguais e o if retornara o valor 1 (em booleano verdadeiro),caso contrario retornara 0 (falso). 
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1;
        // ao terminar o ciclo a condicional verifica se o indice findado é igual ao nulo, caso contrario ele retorna falso.
    }
    else {
        return 0;
    }
    
    
}
// -------------------------------------------------------------

// pegando strings do usuario

#include <stdio.h>

int main() 
{
    char nome[10];
    char sobrenome[10];
    
    printf("digite seu nome e sobrenome: ");
    scanf("%s %s",&nome,&sobrenome);
    
    printf("%s %s",nome,sobrenome);
    
    
    
    return 0;
}

// ----------------------------------------------------------------

//pegando strings do usuario part 2

#include <stdio.h>

int main()
{
    char linha[100];
    char caractere;
    int i = 0;
    
    do {
        caractere = getchar(); // funcao padrao em c para pegar caracteres digitados pelo usuário.
        linha[i] = caractere;
        ++i;
    }
    while (caractere != '\n');
    // enquanto o caractere digitado for diferente de ENTER, ( pois '\n' e enter é a mesma coisa)
    // se der erro de memoria (%$ ? > # *) somente adiar o caracte nulo da var linha ex: (linha [i-1]) antes de printar. 
    printf("%s",linha);
    
    return 0;
}

// -----------------------------------------------------------------

//funcao que verifica se os caracteres da palavra do usuário sao todas
// letras ou nao
#include <stdio.h>

int main()
{
    void alfabetico(char variavel);
    
    char nome[20];
    printf("Digite uma palavra: ");
    scanf("%s",nome);
    int i = 0;
    while (nome[i] != '\0') {
        alfabetico(nome[i]);
        ++i;
    }
    
    
    return 0;
}

void alfabetico(char variavel) {
    if (variavel >= 'a' && variavel <= 'z' || variavel >= 'A' && variavel <= 'Z') {
        printf("é uma letra\n");
    }
    else {
        printf("nao e uma letra\n");
    }
}

//-------------------------------------------------------------------------------------

#include <stdio.h>  // SEQUENCIAS DE ESCAPE **DICAS**

int main()
{
    //printf("boa\nnoite!!"); //quebra a linha o move o cursor tbm no inicio da outra linha
    //printf("boa \0noite!!"); // caractere nulo indica o fim de uma sequencia de caracteres, caso colocado no meio de uma frase o mesmo termina a frase ali mesmo.
    
    //printf("boa noite\a"); //bip sonoro
    //printf("boa noit\be");// move o cursor para a direita
    //printf("bo\ra noite"); // o \r era para voltar a primeira linha
    //printf("\"boa noite\""); // \"utiliza aspas na string
    printf("\'boa noite\'"); // \'utiliza apostrofo na string
    
    return 0;
}
//-----------------------------------------------------------------

#include <stdio.h>
// exemplo da tabela ASCII do compilador (pesquisar sobre ela para utilizar)
int main()
{
    int x = 36;
    
    printf("%c",x);
    
    
    return 0;
}

*/