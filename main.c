#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	double media;
		
	printf("Please insert the grades of the year\n");
		
    printf("\nEnter an integer: ");
    scanf("%d", &numero1);  
    printf("\nEnter an integer: ");
    scanf("%d", &numero2);
    printf("\nEnter an integer: ");
    scanf("%d", &numero3);
    printf("\nEnter an integer: ");
    scanf("%d", &numero4);
			
	media = (numero1+ numero2+ numero3+ numero4) / 4;
	
	if(media == 10){
		printf("O aluno passou com exito!");
	} else if(media >= 7){
		printf("O aluno passou!\n");
		printf("Com nota: %d", media);
	} else {
		printf("Aluno reprovado\n");
		printf("Com nota: %d", media);
	}
		
	return 0;
}
