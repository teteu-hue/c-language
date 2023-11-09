#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
	
	int array[10];
	int tamanhoArr = sizeof(array) / sizeof(array[0]);
	int i;

	for(i = 0; i < tamanhoArr;i++){
		scanf("%d\n", &array[i]);
	}

	bool isOrdened = true;

	while(isOrdened){

	isOrdened = false;
	for(i = 0; i < tamanhoArr; i++){

		if(array[i] > array[i+1]){
			isOrdened = true;
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	 }
	}

	printf("[");

	for(i = 0; i < tamanhoArr; i++){
		printf("%d, ", array[i]);
	}

	printf("]\n");
	
}
