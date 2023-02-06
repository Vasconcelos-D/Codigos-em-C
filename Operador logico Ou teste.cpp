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
//No operador || (ou) basta apenas uma das comparações ser verdadeiras para que o resultado seja verdadeiro
