void soma(int num1, int num2){
	int resultado = num1 + num2;
	printf("O resultado e: %d", resultado);
}

void subtrair(int num1, int num2){
	int resultado = num1 + num2;
	printf("O resultado e: %d", resultado);
}

void dividir(float num1, float num2){
	if(num1 == 0 || num2 == 0){
		printf("Não é possível dividir por zero");
		return;
	}
	float resultado = num1 / num2;
	printf("O resultado e: %.2f", resultado);
}

void multiplicar(float num1, float num2){
	float resultado;
	if(num1 == 0 || num2 == 0){
		resultado = 0;
	};
	resultado = num1 * num2;
	printf("O resultado e: %.2f", resultado);
}
