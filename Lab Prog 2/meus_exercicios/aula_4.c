#include <stdio.h>
#include <stdlib.h>

/** Operações Matematicas
 + soma
 - subtração
 / divisão
 * multipliacação
  
Data: 21/08/2024
**/

int main() {
	// Declaração de Variavel
	float valorUm, valorDois, resultado;
	int subtracao, multi;
	float divisao, media, resto;
	
	valorUm = 7;
	valorDois = 8;
	
	resultado = valorUm + valorDois;
	subtracao = valorUm - valorDois;
	divisao = valorUm / valorDois;
	multi = valorUm * valorDois;
	
	media = (valorUm + valorDois) / 2;
	
	resto = 10 % 2;
	// Impressão
	printf ("%f \n", resultado);
	printf ("%i \n", subtracao);
	printf ("%f \n", divisao);
	printf ("%i \n", multi);
	printf ("%f \n", media);
	printf ("%f \n", resto);
	
	return 0;
}
