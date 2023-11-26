#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Product.c"
#include "database.h"

const Product DATABASE[100];	

void main(){
	
	Product p;

	p = setProduct("vinho", 1.75);

	DATABASE[0] = setProduct("vinho", 1.78);

	printf("%s", DATABASE[0].nameProduct);
	printf("%2.f\n", DATABASE[0].value);

}
