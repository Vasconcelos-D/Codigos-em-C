#include <stdio.h>
#include <stdlib.h>
int main (){
	int cont; 
	float salario;
	float soma;
	float media;
	float maior;
	for(cont=1 ; cont<=10 ; cont=cont++){
	 printf("Digite o Salario do Funcionario:");
	 scanf("%f",&salario);
	 soma = soma+salario;
	 media = soma/5;
 		if (salario > maior){
			maior = salario;
		 
		printf("O Maior Salario da Empresa e = %.2f \n", maior);
	 	printf("A Media Salarial da Empresa e = %.2f \n", media);	
		 } 	
	
	  }
 return 0;
}
