//Estrutura de Repetiçaõ While
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num; // Declaração das Variavéis
	printf("Digite um numero: "); // pront 
	scanf("%d",&num); // Entrada do teclado, intrução de rebecer um int do TC
	while (num!=0) // Estrutura de repetição While
	// Tudo que tiver dentro desta estrurura de rep, vai ser executada, até que a sua condição seja atingida, enquanto não ele continua a exetucltar as condições.
	{
		printf("O numero lido foi = %d\n",num);
		printf("Digite um numero: ");
	    scanf("%d",&num);
	}
	return 0;
}

