#include <stdio.h>
#include <stdlib.h>
int main() {
	int matA[4][4];
	int matB[4][4];
	int lin;
	int col;

	
printf("\nDigite a Matriz Original: \n");

		for (lin = 0; lin < 4 ; lin++){
	
		for (col = 0; col < 4 ; col++){
				scanf("%d",&matA[lin][col]);
				matB[col][lin] = matA[lin][col];
				}
		
 	}	
	printf("\nMatriz Gerada: \n");
	
			for (lin = 0; lin < 4 ; lin++){
				for (col = 0; col < 4 ; col++){
					printf("%d",matB[lin][col]);
						
		}	
		printf("\n");	
	}
	return 0;
}
