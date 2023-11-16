#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct // create a struct to receive the data from a person
{
	char name[10];
	float weight;
	int age;
	float height;

} Person; // define the name of a type created.

Person setPerson(char name[], float weight, int age, float height){
	Person P;
	strcpy(P.name, name);
	P.weight = weight;
	P.age = age;
	P.height = height;
	return P;
}

void printPerson(Person p){
	printf("Your name is: %s || your weight: %2.f || your age is: %d || your height is: %2.f", p.name, p.weight, p.age, p.height);
}

void main(){
	Person Joao, Maria;
	Person povo[10];
	
	Joao = setPerson("Joao", 175, 19, 1.75);
	Maria = setPerson("Maria", 174, 20, 1.78);

	printPerson(Joao);
	printf("\n\n========================\n\n");
	printPerson(Maria);
}
