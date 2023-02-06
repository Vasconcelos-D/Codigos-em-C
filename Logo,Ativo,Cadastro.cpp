#include <stdio.h>
int main() {
	int cadastrado = 200;
	int ativo = 300 ;
	int logado = 400;
	char opcao;
	
	printf ("Deseja cadastrar sua conta? S/N \n");
	scanf(" %c", &opcao);
	// Ao dar valor da variavel opcão, se for 'S' Maiusculo, deve execultar no comptilador Maiusculo. Se colocar 's' se execulta com minusculo no compitlador. 
	// prestar atencão para que não quebre cabeça. 
	if(opcao == 's') {
		cadastrado = cadastrado + 20;
		printf("\nConta Cadastrada. \n");
	}

	printf ("Deseja ativar sua conta? S/N \n");
 	scanf (" %c", &opcao);
	
	if(opcao == 's') {
		ativo = ativo + 30;
		printf("\nConta Ativada. \n");		
	}

	printf ("Deseja Logar sua conta? S/N \n");
	scanf (" %c", &opcao);
		
	if(opcao == 's') {
		logado = logado + 40;
		printf("\nConta Logada. \n");
	}
	
	if( (cadastrado == 220) && (ativo == 330) && (logado == 440) ){
		printf("\n Seja Bem Vindo. \n");
	} else {
		printf("\n Algo deu errado. \n");
	}
}



 
