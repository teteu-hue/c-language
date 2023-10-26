#include <stdio.h>
#include <stdlib.h>
#include <biblioteca.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double multiplicar(int num1, int num2){
	double resultado = 1;
	
	if(num1 == 0 || num2 == 0){
		resultado = 0;
		return resultado;
	}
	
	printf("Digite o primeiro número que deseja multiplicar\n");
	scanf("%d", &num1);
	printf("Digite o segundo número que deseja multiplicar\n");
	scanf("%d", &num2);
	resultado = num1 * num2;
	return(resultado);
	
}

double dividir(int num1, int num2){
	double resultado;
	
	if(num1 == 0 || num2 == 0){
		resultado = 0;
		return resultado;
	}
	
	printf("Digite o primeiro número que deseja dividir\n");
	scanf("%d", &num1);
	printf("Digite o segundo número que deseja dividir\n");
	scanf("%d", &num2);
	resultado = num1 / num2;
	return(resultado);
	
}

int somar(int num1, int num2){
	int resultado;
	
	printf("Digite o primeiro número que deseja somar\n");
	scanf("%d", &num1);
	printf("Digite o segundo número que deseja somar\n");
	scanf("%d", &num2);
	resultado = num1 + num2;
	return(resultado);
	
}

int subtrair(int num1, int num2){
	int resultado;
	
	printf("Digite o primeiro número que deseja subtrair\n");
	scanf("%d", &num1);
	printf("Digite o segundo número que deseja subtrair\n");
	scanf("%d", &num2);
	resultado = num1 - num2;
	return(resultado);
	
}

int main(int argc, char *argv[]){
	int opcao;
	int num1, num2, resultado;
	printf("Bem vindo a calculadora do teteu!\n");


	do{
		printf("************* Qual operacao voce deseja fazer? *************\n");
		printf("1 - Multiplicacao\n");
		printf("2 - Divisao\n");
		printf("3 - Subtracao\n");
		printf("4 - Adicao\n");
		
		scanf("%d", &opcao);
		printf("%d", opcao);
		printf("\n");
		
		switch(opcao){
			case 1:
				resultado = multiplicar(num1, num2);
				printf("O resultado da multiplicacao e: %d\n", resultado);
			break;
			
			case 2:
				resultado = dividir(num1, num2);
				printf("O resultado da divisao e: %d\n", resultado);
			break;
				
			case 3:
				resultado = subtrair(num1, num2);
				printf("O resultado da subtracao e: %d\n", resultado);
			break;
			
			case 4: 
				resultado = somar(num1, num2);
				printf("O resultado da soma e: %d\n", resultado);
			break;
		}
	} while(opcao != 0);
}
