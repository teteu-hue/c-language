void soma(int num1, int num2){
	int resultado = num1 + num2;
	printf("O resultado e: %d\n", resultado);
}

void subtrair(int num1, int num2){
	int resultado = num1 - num2;
	printf("O resultado e: %d\n", resultado);
}

void dividir(float num1, float num2){
	if(num1 == 0 || num2 == 0){
		printf("Não é possível dividir por zero\n\n");
		return;
	}
	float resultado = num1 / num2;
	printf("O resultado e: %.2f\n", resultado);
}

void multiplicar(float num1, float num2){
	float resultado;
	if(num1 == 0 || num2 == 0){
		resultado = 0;
	};
	resultado = num1 * num2;
	printf("O resultado e: %.2f\n", resultado);
}

void menu(){
	printf("************* Qual operacao voce deseja fazer? *************\n");
	printf("1 - Multiplicacao\n");
	printf("2 - Divisao\n");
	printf("3 - Subtracao\n");
	printf("4 - Adicao\n");
	printf("0 - Sair da calculadora\n");
}

void menuOptions(int opcao, int num1, int num2){
	
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

}
