#include <stdio.h>
#include <stdlib.h>
int main() // Cod: Matriz e Vetor.
{
	int mat[5][5];
	int col;
	int lin;

//	printf("\n Digite o valor para os elementos da Matriz Original: \n");

			for (lin = 0; lin < 5 ; lin++){
				for (col = 0; col < 5 ; col++){
					mat[lin][col] = 1;
					if (lin == col)
					{
					  mat[lin][col] = 0;
					  printf("%d",mat[lin][col]);
					}
				}	
				printf("\n");			
			}

	return 0;
}
