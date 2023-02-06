#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,somapar,somaimpar,cont,n;
	somapar = 0;
	somaimpar = 0;
		printf("Digite a quantidade de numeros na lista: ");
		scanf("%d",&n);
	 for(cont = 1 ; cont <= n ; cont ++ )
	 	{
		  printf("Digite um numero: ");
		  scanf("%d",&num); 
		 if(num%2 == 0 )
			{
			 somapar = somapar+num; 
		    } else {
		    	    somaimpar = somaimpar+num;
		 			}
		 }
		 printf("A soma dos numeros PARES = %d\n",somapar);
		 printf("A soma dos numeros IMPARES = %d\n",somaimpar);
		 return 0;
}
