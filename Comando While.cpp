//Estrutura de Repeti�a� While
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num; // Declara��o das Variav�is
	printf("Digite um numero: "); // pront 
	scanf("%d",&num); // Entrada do teclado, intru��o de rebecer um int do TC
	while (num!=0) // Estrutura de repeti��o While
	// Tudo que tiver dentro desta estrurura de rep, vai ser executada, at� que a sua condi��o seja atingida, enquanto n�o ele continua a exetucltar as condi��es.
	{
		printf("O numero lido foi = %d\n",num);
		printf("Digite um numero: ");
	    scanf("%d",&num);
	}
	return 0;
}

