#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int startNum;
	int finalNum;
	float bornNum, deadNum;
	int years;


	printf("Bem vindo ao calculador populacional do teteu!!!\n");
	printf("Digite o valor inicial da população: ");
	scanf("%d", &startNum);
	printf("\nDigite o valor final da população: ");
	scanf("%d", &finalNum);
	printf("\n");

	bornNum = startNum / 3;
	deadNum = startNum / 4;

	/* for(years = 0; startNum < finalNum; years++){
		startNum = startNum + bornNum - deadNum;
	} */
	
	bool control = true;

	while(control){
		startNum += bornNum - deadNum;
		control = false;
		if(startNum < finalNum){
			control = true;
			years++;
		} 
		

	}
	
	printf("%d\n", years);
	
	return 0;
}
