#include <stdlib.h>
#include <stdio.h>

void doubleValue(int array[], int size_array){

	int i;

	for(i = 0; i < size_array; i++){
		array[i] *= 2;
	}
}

void insertValues(int array[], int size_array){
		
	int i;
	for(i = 0; i < size_array; i++){
		printf("Posição %d: ", i+1);
		scanf("%d", &array[i]);
	}
}


void printArray(int array[], int size_array){

	int i;
	printf("[");

	for(i = 0; i < size_array; i++){
	
		printf("%d ,", array[i]);
	}

	printf("]");
}
