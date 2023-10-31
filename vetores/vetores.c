#include <stdio.h>
#include <stdlib.h>

void main(){

	int list[10];
	int i;
	int userGuess;	

	i = sizeof(list);
	printf("%d\n", i);
	printf("[");
	for(i = 0; i <= sizeof(list); i++){
		list[i] = scanf("%d", &userGuess);
		printf("%d", list[i]);
	}
	printf("]");

}
