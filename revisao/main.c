#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){

	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\n");

	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("\n");

	soma(num1, num2);

	return 0;
}

