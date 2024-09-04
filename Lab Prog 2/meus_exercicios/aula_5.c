#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int idade = 18;
	int temCarteira = 1;
	// OPERADORES > < ==
	// Operador Lógico E -> &&
	// Maior ou igual >=
	// Menor ou igual <=
	if(idade >= 18 &&  idade <= 75 ){
		printf("Tenho mais de 18 \n");
	                                   // Juntou um if com outro
	if(temCarteira == 1){
		printf("Pode dirigir \n");
	} // fim do if
    } // fim do if

	return 0;
}
