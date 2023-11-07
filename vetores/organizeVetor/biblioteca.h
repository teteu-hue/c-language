#include <stdbool.h>

int * sortArray(int array[]){
	int tamanhoArr = sizeof(array) / sizeof(array[0]);
	int i;
	
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
	return array;
}
