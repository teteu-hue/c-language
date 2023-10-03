#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int total;
	printf("digite um valor para o numero 1:\n");
	scanf("%d",&numero1);
	printf("digite um valor para o numero 2:\n");
	scanf("%d",&numero2);
	total = numero1+numero2;
	if(total>10){
		printf("Valor maior que 10");
	}
	else{
		if(total<0){
		printf("numero negativo");
		}
		else {
		printf("Valor menor ou igual que 10");
	    }
	}
	printf("Boa tarde, aula hje e sobre variaveis e estrutura de condicao");
	printf("\nA soma do numero1:%d + numero2:%d resultou em %d",numero1,numero2,total);
	return 0;
}
*/

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
	int opcao = 10;
	int num1=1, num2=2, resultado;
	printf("Bem vindo a calculadora do teteu!\n");
	
	while (opcao != 0){
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
	}
}
