/*Programa teste do EXR, Impressão das operações*/
/* Mostrando dois metodos digerentes
1 declarando as variais, SOMA>PRODUTO>RESTO>QUOCIENTE. Fazendo que cada uma
receba um calculo, atraves da atribuição de cada uma das variaveis e suas respectives calculos.
2 através do proprio calculo no "PRINTF".*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int num1;// Declaração das Variaveíes.
	int num2;
	int soma;
	int prod;
	int cons;
	int rest;
	
	printf("Digite  numero 1: \n");// Função, imprime um numero1 na tela a pedido do usuario.
	scanf("%d", &num1); // Pede entrada do teclado.
	
	printf("Digite o numero2: \n");// Função, imprime um numero1 na tela a pedido do usuario.
	scanf("%d", &num2);// Pede entrada do teclado.
	// Calculos dos valores dentro da propria condição "PRINTF".
	printf("Soma e:: %d \n", num1 + num2);
	printf("Produto e:: %d \n", num1 * num2);
	printf("Resto e:: %d \n", num1 % num2);
	printf("Quociente e:: %d \n", num1 / num2);
				
/*	soma = num1 + num2;
	rest = num1 % num2;
	prod = num1 * num2;
	cons = num1 / num2;
	printf("Soma e:: %d \n", soma);
		printf("Resto e:: %d \n", rest);
			printf("Produto e:: %d \n", prod);
				printf("Quociente e:: %d \n", cons);
	*/

}
