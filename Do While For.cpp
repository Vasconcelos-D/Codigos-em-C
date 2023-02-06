/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_bruto,sal_liquido,imposto,tot_bruto=0,tot_liquido=0,tot_imposto=0;
	int cont_func=1;
		do
		{
			printf("Digite o Salario Bruto: ");
			scanf("%f",&sal_bruto);
		if(sal_bruto>999)
				{
					imposto = sal_bruto*0.10;
				}	
				if(sal_bruto > 9999)
				{
				imposto = sal_bruto*0.15;
				}		
				if(sal_bruto > 99999)
				{
				imposto = sal_bruto*0.20;
				} 	
				if(sal_bruto >999999)
				{
				 imposto = sal_bruto*0.25;
				}	else	{
				
							    imposto = sal_bruto*0.30;
								sal_liquido = sal_bruto - imposto;	
							}
							
							printf("Salario Liquido: %.2f\n\n",sal_liquido);
									tot_bruto = tot_bruto + sal_bruto;
									tot_liquido = tot_liquido + sal_liquido;
									tot_imposto = tot_imposto + imposto;
							cont_func++; 		
			 		}
			 	
		
		while (cont_func<5);
		printf("TOT salario Bruto: %.2f\n",tot_bruto);
		printf("TOT salario Liquido: %.2f\n",tot_liquido);
		printf("TOT de Imposto: %.2f\n",tot_imposto);
	
		return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_bruto;
	float sal_liquido;
	float imposto;
	float tot_bruto=0;
	float tot_liquido=0;
	float tot_imposto=0;
	int cont_func = 1;
	
		while (cont_func<=5){
		 	  	printf("Digite o Salario Bruto: ");
		 		scanf("%f",&sal_bruto);
	    		if(sal_bruto > 999){
		 	     	imposto = sal_bruto*0.10;
		 		} else {
				    if(sal_bruto > 1999){
		 		      imposto = sal_bruto*0.15;
		 		} else {
				    if(sal_bruto > 9999){
				      imposto = sal_bruto*0.20;
		 		} else{
			
				    if(sal_bruto > 99999){
		 	          imposto = sal_bruto*0.25;
				 }else {
				 
			     imposto = sal_bruto*0.30;

				       }
						   
			        }
	         	}
         	}
         	
       	sal_liquido = sal_bruto - imposto;
       	
       	printf("Salario Liquido: %.2f\n\n",sal_liquido);
    	 
		tot_bruto = tot_bruto + sal_bruto;
		tot_liquido = tot_liquido + sal_liquido;
		tot_imposto = tot_imposto + imposto;
		
		cont_func++; 
	}
    	 
	
		printf("TOT salario Bruto: %.2f\n",tot_bruto);
		printf("TOT salario Liquido: %.2f\n",tot_liquido);
		printf("TOT de Imposto: %.2f\n",tot_imposto);
		
		return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sal_bruto,sal_liquido,imposto,tot_bruto=0,tot_liquido=0,tot_imposto=0;
	int cont_func;
	for(cont_func=1 ; cont_func<=5 ; cont_func++)
	    {
	     printf("Digite o Salario Bruto: ");
	     scanf("%f",&sal_bruto);
	    		if(sal_bruto > 9999)
	    		 {
	    		 	imposto=sal_bruto * 0.10;
				 }	else {
				    	if(sal_bruto > 99999)
				    	 {
				 		  imposto=sal_bruto*0.15;
						 }	else {								
							   	   if(sal_bruto > 999999)
								   {
							       imposto=sal_bruto*0.20;
								   }	else {												 
						 			 if(sal_bruto > 9999999)
									  {
				   					   imposto=sal_bruto*0.25;
					   			      }	else  {									   	
					   						  imposto=sal_bruto*0.30;
	 				   						  
										    }
							        	}			    	    
					    	        }		
					        	}
					 sal_liquido=sal_bruto-imposto;
        			 printf("Salario Liquido: %.2f\n\n",sal_liquido);
					 tot_bruto = tot_bruto + sal_bruto;
				     tot_liquido = tot_bruto + sal_liquido;
					 tot_imposto = tot_imposto + imposto;
											
	   }
				 				
	
		
		printf("TOT salario Bruto: %.2f\n", tot_bruto);
		printf("TOT salario Liquido: %.2f\n",tot_liquido);
		printf("TOT de Imposto: %.2f\n",tot_imposto);
		
	return 0;
}

