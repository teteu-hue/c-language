#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void main(){

	int tamanhoArr = 20;	
	int list[tamanhoArr];

	insertValues(list, tamanhoArr);
	doubleValue(list, tamanhoArr);
	printArray(list, tamanhoArr);
}
