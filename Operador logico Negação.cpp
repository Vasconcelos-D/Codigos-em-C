#include <stdio.h>
int main (void)
{
	float limite_min = 5.0 , limite_max = 12.0 , temperatura ;
	
	printf("Informe o valor da temperatura: ");
	scanf("%f", &temperatura);
	
	// se (temperatura > limite_max Ou temperatura > limte_min)
	if (!(temperatura > limite_max || temperatura < limite_min )) 
	printf("Temperatura Ok! \n");
	else 
	printf("Alerta: TEMPERATURA FORA DA FAIXA PERMITIDA!!! \n");
	return (0);
}
//Negação (!) Faz com que o resultado seja o Contrario. Se for V vai ser F e virse e versa.
