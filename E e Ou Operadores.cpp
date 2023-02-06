#include <stdio.h>
int main (int argc, char *argv ){
char sexo; // E comercial e Ou logico.
	printf("Qual e o seu sexo? (f/m)");
	scanf(" %c", &sexo);

	/*
 	if(sexo == 'f' || sexo =='F') {
		printf("Voce e do sexo feminino.\n");
	} else if(sexo == 'm' || sexo == 'M'){
		printf(" Voce e do sexo masculino.\n");
	} else {
		printf("Voce digitou um valor invalido");
	}
	*/
	
	if(sexo == 'f' || sexo =='F') {
		printf("Voce e do sexo feminino.\n");
	}
	
	 if(sexo == 'm' || sexo == 'M'){
		printf(" Voce e do sexo masculino.\n");
	}
	
	if(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M')	 {
		printf("Voce digitou um valor invalido");
	}	

}
