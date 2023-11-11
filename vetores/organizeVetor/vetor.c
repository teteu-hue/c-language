#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "biblioteca.h"

void main(){
	
	int array[10];
	int tamanhoArray = sizeof(array) / sizeof(array[0]);
	int i;
	int * ordenedArray;

	for(i = 0; i < tamanhoArray; i++){
		scanf("%d\n", &array[i]);
	}

	ordenedArray = sortArray(array, tamanhoArray);

	imprime(ordenedArray, tamanhoArray);
	
}
