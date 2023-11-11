#include <stdbool.h>

void sortArray(int array[], int tamanhoArray){
	
	int i;	
	bool isOrdened = true;

	while(isOrdened){

	isOrdened = false;
	for(i = 0; i < tamanhoArray; i++){

		if(array[i] > array[i+1]){
			isOrdened = true;
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	 }
	}
}

void printArray(int array[], int tamanhoArray){
	int i;

	printf("[");
	for(i = 0; i < tamanhoArray; i++){
		printf("%d, ",array[i]);
	}
	printf("]\n");

}

void insertValues(int array[], int size_array){
	int i;

	for(i = 0; i < size_array; i++){
		scanf("%d", &array[i]);
	}
	printf("\n");

}
