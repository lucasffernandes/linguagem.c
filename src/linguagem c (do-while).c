#include <stdio.h>
int main() {
    float soma = 0; 
    float valor; 
    int opcao; 
    do {
        printf("\n M E N U   D E  O P Ç Õ E S");
        printf("\n 1. Depósito"); 
        printf("\n 2. Saque"); 
        printf("\n 3. Saldo"); 
        printf("\n 4. Sair"); 
        printf("\n Informe uma opção: "); 
        scanf("%d", &opcao);
        switch(opcao) {
            case 1: 
                printf("\n Informe o valor: "); 
                scanf("%f", &valor); 
                soma += valor;                       // realiza um programa que simula uma conta bancária (com tela de opções das transações. Ele repete uma entrada de dados até que determinada condição de saída seja atingida e, em seguida, acumule os valores digitados. 
                break;
            case 2: 
                printf("\n Informe o valor: "); 
                scanf("%f", &valor);                 // foi utilizado o laço do-while para implementar o menu do programa, uma estrutura de repetição usando comparativo. Adaptado do livro do Soffner (2013). 
                soma -= valor; 
                break;
            case 3: 
                printf("\n Saldo atual = R$ %.2f", soma); 
                break; 
            case 4: 
                printf("\n Saindo..."); 
                break; 
            default: 
                printf("\n Opção inválida!"); 
        }   
    } while (opcao != 4); 
    printf("\n\n Fim das operações!");
	return 0;
}



/// tambem um algoritmo para calculo de salário abaixo!!

/*

#include <stdio.h>
#include <math.h>

int main() 
{
    float salario;
    printf("Programa para calculo de salário com o desconto do INSS.");
    printf("\n\ndigite sua salário: ");
    scanf("%f",&salario);
    
    if (salario > 0 && <= 1693.72)
    {
        salario = salario - salario * 0.8;
        printf("\nseu salário líquido é: %.2f",salario);
        printf("\n\nFIM DE PROGRAMA...");
    }
    else if (salario > 1693.72 && <= 2822.90)
    {
        salario = salario - salario * 0.9;
        printf("seu salário descontado é: %2.f",salario );
        printf("\n\nFIM DE PROGRAMA...");
    }
    else if (salario > 2822.90 && <= 5646.80)
    {
        salario = salario - salario * 0.11;
        printf("seu salário com desconto é: %2.f", salario);
        printf("\n\nFIM DE PROGRAMA...");
    }
    else 
    {
        salario = salario - 621.04;
        printf("seu salário líquido é: %2.f", salario);
        printf("\n\nFIM DE PROGRAMA...");
    }
    
    
    
    return 0;
}



// OUTRO CALCULO DE SALÁRIO .................................


// RESOLVIDO!!!

#include <stdio.h>

int main()
{
    float salario,inss,ir,sal_liquido;
    printf("Calculo de salário liquido com desconto do IR e INSS\n\n");
    printf("\nDigite seu salário Bruto: ");
    scanf("%f",&salario);
    
    // Calcular o INSS
    // na digitacao do salario nao existe duas especificacoes de pontos
    // existe somente uma, ex: 1200.00 / e nao 1.200,00
    
    if (salario <= 1693.72) {
        inss = salario * 0.08;
        ir = 0;
    }
    // na condicional deve-se colocar a variável duas veses quando houver comparaçao, caso contrário o compilador não entenderá corretamente o que será comparado
    else if (salario > 1693.73 && salario <= 2822.90) {
        inss = salario * 0.09;
        if (salario <= 1903.98) {
            ir = 0;
        }
        else if (salario >= 1903.99 && salario <= 2826.65) {
            ir = salario * 0.075;
        }
        
    } 

    else if (salario >= 2822.91 && salario <= 5646.80) {
        inss = salario * 0.11;
        if (salario >= 1903.99 && salario <= 2826.65) {
            ir = salario * 0.075;
        }
        else if (salario >= 2826 && salario <= 3751.05) {
            ir = salario * 0.15;
        }
        else if (salario >= 3751.06 && salario <= 4664.68) {
            ir = salario * 0.225;
        }
        else if (salario > 4664.68) {
            ir = salario * 0.275;
        }
        
    }

    else {
        inss = 621.04;
        ir = salario * 0.275;
    }

    //formula:

    sal_liquido = (salario - inss) - ir; 
    printf("\n\n\nDescontos do INSS é: %.2f\n\n",inss);
    printf("Desconto do imposto de renda é: %.2f\n\n",ir);
    printf("Salário liquido: %.2f\n\n",sal_liquido);
    
    
    return 0;
}

*/