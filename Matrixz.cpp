#include <stdio.h>
#include <stdlib.h>
int main() // Ex: com 1 (FOR) 
{
	int mat[3][3];
	int col;
	int lin;
	int maior = 0;
	int contigual = 1;

	printf("\n Digite o valor para os elementos da Matriz Original: \n");

		for (lin = 0; lin < 3 ; lin++)
			for (col = 0; col < 3 ; col++){
				printf("elemento[%d][%d] = ",lin,col);
				scanf("%d",&mat[lin][col]);
				if (mat[lin][col] > maior){
					maior = mat[lin][col];
					contigual = 1;
				}	else {
					if(mat[lin][col] == maior){
					contigual++;
					}
				}
			}
			
		
	printf("\n Maior : %d",maior);
	printf("\n Ocorrencias do Maior: %d",contigual);

	
	return 0;
}


/*#include <stdio.h>
#include <stdlib.h>
int main() // Cod: Ex: com 2 (FOR)
{
	int mat[3][3];
	int col;
	int lin;
	int maior = 0;
	int contigual = 1;

	printf("\n Digite o valor para os elementos da Matriz Original: \n");

		for (lin = 0; lin < 3 ; lin++)
			for (col = 0; col < 3 ; col++){
				printf("elemento[%d][%d] = ",lin,col);
				scanf("%d",&mat[lin][col]);
				if (mat[lin][col] > maior){
					maior = mat[lin][col];
				}
			}
			
			for (lin = 0; lin < 3 ; lin++){
				for (col = 0; col < 3 ; col++){
					if (mat[lin][col] == maior)
					{
						contigual++;
					}
				
				}
				
			}
	printf("\n Maior : %d",maior);
	printf("\n Ocorrencias do Maior: %d",contigual);

	
	return 0;
}
*/
