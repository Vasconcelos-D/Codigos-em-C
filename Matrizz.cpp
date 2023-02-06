#include <stdio.h>
#include <stdlib.h>
int main() // Cod: Matriz e Vetor.
{
	int mat[3][4];
	int lin;
	int col;
	int contpar = 0;
	int contimpar = 0;

	printf("Digite o valor para os elementos de Matriz: \n\n");

		for (lin = 0; lin < 3 ; lin++)
			for (col = 0; col < 4 ; col++){
			printf("\n Elemento[%d][%d] = ",lin,col);
			scanf("%d",&mat[lin][col]);
		}

		printf("\n\n ******** Saida de Dados ******** \n\n");
		for (lin = 0; lin < 3 ; lin++)
			for (col = 0; col < 4 ; col++)
			{
				if (mat[lin][col]% 2 == 0)
				{
					contpar++;
				}	else {
					contimpar++;
				}

			}
			printf("\n Pares: %d", contpar);
			printf("\n Pares: %d", contimpar);
	return 0;
}
