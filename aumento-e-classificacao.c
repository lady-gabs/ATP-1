#include <stdio.h>

int main() {
	float preco, novo;
	char *clas;
	scanf(" %f", &preco);
	
	if(preco<=49.99){
		novo=(preco*1.05);
	}else if(preco>=50.00 && preco<=99.99){
		novo=(preco*1.1);
	}else if(preco>=100.00){
		novo=(preco*1.15);
	}
	
	if(novo<=79.99){
		clas="Barato";
	}else if(novo>=80.00 && novo<=119.99){
		clas="Normal";
	}else if(novo>=120.00 && novo<=199.99){
		clas="Caro";
	}else if(novo>=200.00){
		clas="Muito Caro";
	}
	printf("%.2f\n", novo);
	printf("%s", clas);
	
	return 0;
}
