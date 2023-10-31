#include <stdio.h>
#include <stdlib.h>

void main(){

	int list[20];
	int i;
	int tamanhoArr = sizeof(list) / sizeof(list[0]);	
	int j;

	for(i = 0; i < tamanhoArr; i++){
		printf("Posição %d:", i);
		scanf("%d", &list[i]);
		list[i]*=2;
	}

	printf("[");
	for(j = 0; j < tamanhoArr; j++){
		printf("%d,", list[j]);
	}
	printf("]");

}
