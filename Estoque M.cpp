#include <stdio.h>
int main(){
	int estoque_minimo, estoque_atual;
	estoque_minimo = 5;
	//  Operador logico
	

	//Não esquecer de usar o (;) para encerrar a linha de codigo.
	printf("Valor do estoque minimo e: %d\n", estoque_minimo);
	//depois das aspas das strings. a (,) e a variavel para que ao compilar o valor da variavel estejá fixo.

	printf("Digite o valor atual em estoque: \n");
	scanf(" %d",&estoque_atual);
	
	if((estoque_minimo > 0) && (estoque_minimo > estoque_atual) || (estoque_atual == 0)){
		//Condição para o IF. ou E ou OR 
		//Se for E todas as condições precisam ser verdades, para dar verdade. Se apenas umas for falso, da falso.
			printf("Estoque atual abaixo do minimo, por favor, REPOR ESTOQUE!!!: \n");
	} else {
			printf("\Tudo em ordem. \n");
		}
	


}
