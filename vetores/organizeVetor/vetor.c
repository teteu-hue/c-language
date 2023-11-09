#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "biblioteca.h"

void main(){
	
	int array[10];
	int tamanhoArr = sizeof(array) / sizeof(array[0]);
	int i;

	for(i = 0; i < tamanhoArr;i++){
		scanf("%d\n", &array[i]);
	}

	sortArray(array);

	printf("[");

	for(i = 0; i < tamanhoArr; i++){
		printf("%d, ", array[i]);
	}

	printf("]\n");
}
