#include <stdio.h>
#include <stdlib.h>
int main()
{
	float perc_reaj,salario,salario_reaj,maior_sal;
	int cont;
	  	maior_sal = 0;
	  	printf("Percentual de reajuste Salarial: ");
	  	scanf("%f",&perc_reaj);
		for(cont = 1 ; cont <=5 ; cont++)
            {
				printf("Informe o Salario do Funcionario: ");
				scanf("%f",&salario);
				
			     salario_reaj = salario + (salario*perc_reaj/100);
			      printf("O Salario Reajustado e: %.2f\n",salario_reaj);
				
					if(salario_reaj > maior_sal)
					{
						maior_sal = salario_reaj;
			 		}
	        }
		  	         printf("O maior Salario reajustado e: %.2f",maior_sal);
			  	     return 0;			
}
