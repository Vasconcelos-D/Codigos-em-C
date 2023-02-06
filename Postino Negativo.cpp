#include <stdio.h>
int main(){
	int a; 
	a=10;
	printf("Digite um valor: \n");
	scanf(" %d",&a);
	
	if(a<0){
		printf("\n Negativo: ");
		if(a%2==0) printf("Par");
		else printf("Impar");
	}else{
		printf("\n Positivo: ");
		if(a%2==0) printf("Par");
		else printf("Impar");
	}
	

	}
