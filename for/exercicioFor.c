#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Desenvolver um programa para que o usuario possa realizar a digitacao de dois numeros (numero inicial e numero final). 
Dentro de uma estrutura de repeticao sera preciso verificar se o numero que esta sendo alimentado e um numero par ou impar. 
A checagem do numero devera ser feita em uma funcao a ser criada. 
A funcao e quem devera verificar a informacao recebida e retornar o status se e par ou impar. 
Dentro da estrutura de repeticao sera preciso exibir uma mensagem com o valor do numero e mais uma frase dizendo se ele e par ou impar. 
Apos o termino da estrutura de repeticao sera preciso informar a quantidade total de numeros pares encontrados.
*/

bool verificaPar (int numero);

int main(int argc, char *argv[]) {
	
	int inicial, final, numPares, i;
	numPares = 0;
	bool valido = true;
	
	
	while (valido) {
		
		printf ("Digite o numero inicial: \n");
		scanf ("%i", &inicial);
		printf ("Digite o numero final: \n");
		scanf ("%i", &final);
		
		if (inicial>final) {
			
			printf ("O numero final precisa ser maior que o inicial \n");
			system("pause");
			system("cls");
			
		} else valido = false;
		
	}
	printf ("\n");
	
	for (i = inicial; i <= final; i++) {
		
		if (verificaPar(i)) {
			printf ("%i: numero par \n", i);
			numPares++;
		} else printf ("%i: numero impar\n", i);
								
	}
	
	printf ("\nEncontrados %i numeros pares.\n", numPares);
	return 0;
}

bool verificaPar (numero) {
	
	if (numero % 2 == 0) {
			return true;
		}
	return false;
	
}
