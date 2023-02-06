//Programa while, com uso do "Switch e Breack".
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	//Declarando as variavéis.
	char letra;
	int conta=0;
	int conte=0;
	int conti=0; 
	int conto=0;
	int contu=0;
	/*Aqui as variavés são declaradas, dando valor (=0) para todas as cont seguidas de vogaias, nais quais irão ter a parada.*/
	printf("Digite uma letra minuscula (a..z) a cada linha e tecle ENTER: \n");// texto de impressão da funcão no progrma, o que vai ser pedido.
	scanf("%c",&letra);// Entrada do teclado.
	
	while (letra!='.') // Funcão a ser seguida.
	{
	     switch(letra)// Comando na qual, contabiliza, qual a intrunção de comando dada.
	     //Neste caso, foi dada a parada, em cada uma das vogais, recebendo valor =0. caso seja 1 é verdaeiro e ele vai parar na vogal, fezendo sua contagem.
	    {
	     case'a':  
		  conta++;break;
		   case'e':
		    conte++;break;
		     case'i':
		      conti++;break;
		       case'o':
		       	conto++;break;
		       	 case'u':
		       	  contu++;break;
		}
		  	scanf("%c",&letra);
	}
	      printf("Total de a: %d\n",conta);
	       printf("Total de e: %d\n",conte);
	        printf("Total de i: %d\n",conti);
	         printf("Total de o: %d\n",conto);
	          printf("Total de u: %d\n",contu);
	          
	return 0;
}
