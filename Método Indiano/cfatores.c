#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) {
	int entrada, saida, aux, limite, i;
	
	printf("**Versao Otimizada**\n\n");
	while(1==1) {
		scanf("%d",&entrada);
		aux = entrada;
		saida = 0;
		if(entrada == 0)
			break;
		
		//Limitador, pelo Metodo Matemático Indiano
		limite = (int) sqrt(aux)+1;
		for(i=2;i<=limite;i++){
			if(aux % i == 0) {
				while (aux % i == 0)
					aux = aux / i;
				saida++;
				limite = (int) sqrt(aux)+1;
			}
		}
		if(aux!=1 && aux!=entrada) saida++;
		
		printf("%d : %d - %d interações necessárias\n",entrada,saida,i);
	}	
	return EXIT_SUCCESS;
}
