/*Programa teste do EXR, Impress�o das opera��es*/
/* Mostrando dois metodos digerentes
1 declarando as variais, SOMA>PRODUTO>RESTO>QUOCIENTE. Fazendo que cada uma
receba um calculo, atraves da atribui��o de cada uma das variaveis e suas respectives calculos.
2 atrav�s do proprio calculo no "PRINTF".*/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int num1;// Declara��o das Variave�es.
	int num2;
	int soma;
	int prod;
	int cons;
	int rest;
	
	printf("Digite  numero 1: \n");// Fun��o, imprime um numero1 na tela a pedido do usuario.
	scanf("%d", &num1); // Pede entrada do teclado.
	
	printf("Digite o numero2: \n");// Fun��o, imprime um numero1 na tela a pedido do usuario.
	scanf("%d", &num2);// Pede entrada do teclado.
	// Calculos dos valores dentro da propria condi��o "PRINTF".
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
