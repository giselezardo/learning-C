#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {
	
	float num1, num2, resultado;
	char operacao = '0';
	
	do {	
	
		resultado = 0;
		printf("\t 1: somar\n");
		printf("\t 2: subtrair\n");
		printf("\t 3: multiplicar\n");
		printf("\t 4: dividir\n");
		printf("\t 0: sair\n\n");
		
		printf("\nQual operacao deseja realizar? \n");
		operacao = getche();
		printf("\n\n");
		
		if (operacao != '0') {
			printf("Digite um numero: ");
			scanf("%f", &num1);
			printf("Digite outro numero: ");
			scanf("%f", &num2);
			
			if (operacao == '1') {
				resultado = num1+num2;
			} else {
				if (operacao == '2') {
					resultado = num1-num2;
				} else {
					if (operacao == '3'){
						resultado = num1*num2;
					} else {
						if (operacao == '4'){	
							if (num2 !=0) {
								resultado = num1/num2;		
							} else {
								printf("Nao eh possivel dividir por zero");
							}			
						} else {
							printf("Operacao invalida");
						}	
					}
				}
			}
			printf("\nResultado: %f \n\n", resultado);
		}
		
		
		system("pause");
		system("cls");			
						
		
	} while (operacao != '0');
	

	return 0;
}
