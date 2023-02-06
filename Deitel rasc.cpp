/*Programa de analise de resultado de exames*/
#include <stdio.h>
#include <stdlib.h>
int main (){
	// inicializa as variavés nas declarações.
	int aprovados;
	int reprovados;
	int aluno;
	int resultado;
	
	aprovados = 0;
	reprovados = 0;
	aluno = 1;
	// processa 10 alunos, usando loop controlado por contador.   
	while( aluno <= 10 ){
	// pede entrada do usuario e lê o valor digitado.
		printf( "Forneca resultado aprovado(1),reprovado(2): " );
		scanf( "%d", &resultado );
	// resultado 1, incrementa aprovados.

	if ( resultado == 1 ){
		aprovados = aprovados + 1;
	} // fim do if.
	else{ // se não, incrementa reprovados.
		reprovados = reprovados + 1;
	} //fim do else.

	aluno = aluno + 1; // incrementa contador de alunos.
	} // fim do while.

	// fase de finalização, exibe número de aprovados e reprovados.
	printf( "Aprovados: %d\n", aprovados );
	printf( "Reprovados: %d\n", reprovados );

	// se mais de 8 forem aprovados, "Bônus ao instrutor!".
	if ( aprovados > 8 )
	{
		printf("Bonus ao instrutor!!:\n");
	}

	return 0; // infica que o programa foi concluido com sucesso.
}
