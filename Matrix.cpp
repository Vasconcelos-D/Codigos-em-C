#include <stdio.h>
#include <stdlib.h>
int main()
{
	const int tamvet = 5;
	int vet1[tamvet];
	int vet2[tamvet];
	int posicao;

	for (posicao = 0; posicao < tamvet; posicao++)
	{
		scanf("%d",&vet1[posicao]);
		if (vet1[posicao]%2 == 0){
			vet2[posicao] = vet1[posicao] + 1;
		} else{
			vet2[posicao] = vet1[posicao] - 1;
		}
	}
		printf("Elementos de Vet1 e Vet2: ");

		for (posicao = 0; posicao < tamvet; posicao++)
		{
			printf("%d ",vet1[posicao]);
			printf("%d ",vet2[posicao]);
		}
	return 0;
}
