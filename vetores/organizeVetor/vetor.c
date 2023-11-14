#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main(){
	
	int tamanhoArray = 10;
	int array[tamanhoArray];


	insertValues(array, tamanhoArray);
	sortArray(array, tamanhoArray);
	printArray(array, tamanhoArray);
}
