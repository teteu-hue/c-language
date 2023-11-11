#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main(){
	
	int tamanhoArray = 10;
	int array[tamanhoArray];

	for(i = 0; i < tamanhoArray;i++){
		scanf("%d", &array[i]);
	}

	printf("\n");

	sortArray(array, tamanhoArray);

	printf("[");

	for(i = 0; i < tamanhoArray; i++){
		printf("%d, ", array[i]);
	}

	printf("]\n");
}
