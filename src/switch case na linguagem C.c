#include <stdio.h>
int main() {
	char x;
	float valor, desc, total;
	printf("\n Digite o valor da compra: ");
	scanf("%f", &valor);
	printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
	printf("\n a. azul");
	printf("\n v. vermelho");
	printf("\n b. branco");
	printf("\n Digite sua opcao:");
	scanf("%s", &x);
	switch(x) {
	case 'a':
		printf("\n Você escolheu a cor azul, seu desconto será de 30 por cento");
		desc = 30;
		break;              // switch-case é o if de muitas condições, semelhante o elif de javaScript
	case 'v':
		printf("\n Você escolheu a cor vermelha, seu desconto será de 20 por cento");
		desc = 20;
		break;
	case 'b':
		printf("\n Você escolheu a cor branca, seu desconto será de 10 por cento");
		desc = 10;
		break;
	default:
		printf("Opcão inválida, não será concedido desconto\n");
		desc = 0;
	}
    total = valor - (valor * desc / 100);
	printf("\n O valor da sua compra é R$ %.2f", total);

return 0;
}
// Sintaxe:
//switch (variável)
//{
//case constante1:    
// <comandos>
//   break;
//case constante2:    

//   break;
//default: <comandos>
//}


/*

#include <stdio.h>

int main()
{
    int numero;
    printf("digite o valor de um numero: entre 0 e 10: ");
    scanf("%d",&numero);
    
    if (numero <= 3) 
    {
        switch (numero)
        {
            case 1:
            printf("voce digitou 1");
            break;
            
            case 2:
            printf("voce digitou 2");
            break;
            
            case 0:
            printf("zerado!!");
            break;
            
            case 3:
            printf("seu numero digitado foi 3");
            break;
            
            default:
            printf("seu numero é negativo camarada!! leia o enuciado e digite o numero certo!");
            
        }
    }
    else if (numero <= 10 )
    {
        printf("esse numero é maior que 3");
    }
    

    else
    {
        printf("voce não digitou o especificado no enunciado, leia de novo e tente novamente!");
    }
    
return 0;
}

// ==================================================================================

#include <stdio.h>
int main() {
	char x;
	float valor, desc, total;
	printf("\n Digite o valor da compra: ");
	scanf("%f", &valor);
	printf("\n Digite a letra que representa o seu desconto de acordo com a cor: ");
	printf("\n a. azul");
	printf("\n v. vermelho");
	printf("\n b. branco");
	printf("\n Digite sua opcao:");
	scanf("%s", &x);
	switch(x) {
	case 'a':
		printf("\n Você escolheu a cor azul, seu desconto será de 30 por cento");
		desc = 30;
		break;              // switch-case é o if de muitas condições, semelhante o elif de javaScript
	case 'v':
		printf("\n Você escolheu a cor vermelha, seu desconto será de 20 por cento");
		desc = 20;
		break;
	case 'b':
		printf("\n Você escolheu a cor branca, seu desconto será de 10 por cento");
		desc = 10;
		break;
	default:
		printf("Opcão inválida, não será concedido desconto\n");
		desc = 0;
	}
    total = valor - (valor * desc / 100);
	printf("\n O valor da sua compra é R$ %.2f", total);

return 0;
}
// Sintaxe:
//switch (variável)
//{
//case constante1:    
// <comandos>
//   break;
//case constante2:    

//   break;
//default: <comandos>
//}




#include <stdio.h>

int main()
{
    int numero;
    printf("digite o valor de um numero: entre 0 e 10: ");
    scanf("%d",&numero);
    
    if (numero <= 3) 
    {
        switch (numero)
        {
            case 1:
            printf("voce digitou 1");
            break;
            
            case 2:
            printf("voce digitou 2");
            break;
            
            case 0:
            printf("zerado!!");
            break;
            
            case 3:
            printf("seu numero digitado foi 3");
            break;
            
            default:
            printf("seu numero é negativo camarada!! leia o enuciado e digite o numero certo!");
            
        }
    }
    else if (numero <= 10 )
    {
        printf("esse numero é maior que 3");
    }
    

    else
    {
        printf("voce não digitou o especificado no enunciado, leia de novo e tente novamente!");
    }
    
return 0;
}

*/