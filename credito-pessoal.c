#include <stdio.h>

int main() {
	float sm, p;
	scanf("%f", &sm); // Inserir o saldo medio
	
	if (sm<=199.99) {
		p=0.1*sm;
		printf("%.2f", p);
	}
	if (sm>=200.00 && sm<=299.99) {
		p=0.2*sm;
		printf("%.2f", p);
	}
	if (sm>=300.00 && sm<=399.99) {
		p=0.25*sm;
		printf("%.2f", p);
	}
	if (sm>=400.00) {
		p=0.3*sm;
		printf("%.2f", p);
	}
	return 0;
} 
	
