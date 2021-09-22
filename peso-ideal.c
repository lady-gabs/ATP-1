#include <stdio.h>

int main() {
	float h, peso;
	char s;
	scanf(" %f %c", &h, &s);
	
	if (s=='F') {
		peso=((62.1*h)-44.7);
		printf("%.3f", peso);
	}else {
		peso=((72.7*h)-58);
		printf("%.3f", peso);
	}
	return 0;
}
