#include <stdio.h>
#include <stdlib.h>

/* else = senão */

int main() {
	int peso = 1000;
	
	printf ("Digite o peso do veiculo \n");
	scanf("%i", &peso);
	
	if(peso >= 0){
		printf (" Peso valido \n");
	}else{
		printf(" Peso invalido \n");
	}
	
	return 0;
}
