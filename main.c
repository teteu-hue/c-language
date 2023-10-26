#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int opcao;
	int num1, num2, resultado;
	printf("Bem vindo a calculadora do teteu!\n");


	do{
		menu();	
		
		scanf("%d", &opcao);
		printf("%d", opcao);
		printf("\n");

		if(opcao == 0){
			printf("Obrigado por usar a calculadora do TETEU\n");
			break;
		}

		printf("Digite o primeiro número: \n");
		scanf("%d", &num1);
		printf("Digite o segundo número: \n");
		scanf("%d", &num2);
		
		switch(opcao){
			case 1:
				multiplicar(num1, num2);
			break;
			
			case 2:
				dividir(num1, num2);
			break;
				
			case 3:
				subtrair(num1, num2);
			break;
			
			case 4: 
				soma(num1, num2);
			break;
		}

	} while(opcao != 0);

	return 0;
}
