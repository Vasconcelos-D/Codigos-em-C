#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num;
	 do
     {
     	printf("Digite um numero: ");
     	scanf("%d",&num);
     	 if(num!=0 && num!=9)
     	     {
     	  	if(num%2==0)
     	  	 {
     	     printf("Sucessor= %d\n\n",num+1);
			 } else {
					printf("Antecessr= %d\n\n",num-1);
				    }	
		     }
     }
     while(num!=0 && num!=9);
     return 0;
}
