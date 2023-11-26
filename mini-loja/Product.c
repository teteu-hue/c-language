struct Product
{
	
	char nameProduct[15];
	float value;

};

Product setProduct(char nameProduct[], float value){
		Product p;
		strcpy(p.nameProduct, nameProduct);
		p.value = value;
		return p;
};
