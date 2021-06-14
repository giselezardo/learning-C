#include <stdio.h>
#include <stdlib.h>

/*
Desenvolver um programa que leia uma matriz de 3 x 3 elementos usando um comando for, multiplique cada elemento por cinco e imprima o resultado.
*/

int main(int argc, char *argv[]) {

	int matrizEnt [3][3], matrizSai [3][3];
	int linha, coluna;
	
	for (linha = 0; linha < 3; linha++){
		
		for (coluna = 0; coluna < 3; coluna++){
			
			printf("Digite numero da linha %d, coluna %d da matriz: ", linha+1, coluna+1);                        
			                       
			scanf("%d", &matrizEnt[linha][coluna]);
			
			matrizSai[linha][coluna] = (matrizEnt[linha][coluna])*5;
			
		}
		
	} 
	
	printf("\n\nNova matriz - elementos multiplicados por 5: \n\n");
	
	for (linha = 0; linha < 3; linha++){
		
		for (coluna = 0; coluna < 3; coluna++){
			
			printf("%d\t", matrizSai[linha][coluna]);                      	            
			
		}
		
		printf("\n\n");
	}
	
	
}
