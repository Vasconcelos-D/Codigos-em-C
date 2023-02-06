#include <stdio.h>
#include <stdlib.h>
int main() // Cod: Matriz e Vetor.
{
	int mat[4][4];
	int lin;
	int col;

	printf("\nDigite o valor para os elementos da Matriz: \n");

		for (lin = 0; lin < 4 ; lin++)
			for (col = 0; col < 4 ; col++){
				if (lin == col)
				{
					printf("Elemento[%d][%d] = 0 \n",lin,col);
					mat[lin][col] = 0;
				}	else {
					printf("Elemento[%d][%d] =  ",lin,col);
					scanf("%d",&mat[lin][col]);
				}
			}	
	printf("\n Listagem dos elementos da Matriz: \n");
			for (lin = 0; lin < 4 ; lin++){
				for (col = 0; col < 4 ; col++){
				
					printf("\nElemento[%d][%d] = %d",lin, col, mat[lin][col]);
					
				}
				printf("\n");
			}		
					
	return 0;
}
