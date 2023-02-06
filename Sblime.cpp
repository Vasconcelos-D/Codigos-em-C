	//Teste de conhecimento
	#include <stdio.h>
	#include <stdlib.h>
	int main(){
//Declaraçãos das variavéis		
	int nota1;
	int nota2;
	int nota3;
	int media;
	int cont;
//Declaracão da funcão for, Dentro dela, vai ser repitido tudo, até o contador chegar ao programado.
	for (cont = 0; cont < 2; cont++)
	{
		printf("Digite a nota1\n");
		scanf("%d", &nota1);
		printf("Digite a nota2\n");
		scanf("%d", &nota2);
		printf("Digite a nota3\n");
		scanf("%d", &nota3);
// Calculo da média.		
	media = (nota1 + nota2 + nota3)/3;
// Condiçaõ If Else.	
	if (media >= 7){
		printf("Parabens voce passou de ano: \n");/* code */
		}	else	{
		printf("Sinto muito voce nao passou de ano: \n");
		}
		printf("Sua media foi:: %d \n", media);
	}
	return 0;
}



/*//Teste de conhecimento
// Programa para calcular a media.
	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
//Declarando as variavéis.
		int nota1;
		int nota2;
		int nota3;
		int media;
//Entrada dos valores inteiros;
		printf("Digite a nota1\n"); 
		scanf("%d", &nota1);
		printf("Digite a nota2\n");
		scanf("%d", &nota2);
		printf("Digite a nota3\n");
		scanf("%d", &nota3);
// Calcula da media das notas.
		media = (nota1 + nota2 + nota3)/3;

		if (media >= 7)
//Condição para media.
		{
			printf("Parabens voce passou de ano: \n");
		}	else	{
			printf("Sinto muito voce nao passou de ano: \n");
		}
			printf("Sua media foi :: %d \n", media); // imprime e media.

		return 0;
	} */
