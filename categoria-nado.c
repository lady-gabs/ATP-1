#include <stdio.h>

int main() {
	int i;
	//Entrada da idade
	scanf("%d", &i);
	
	if (i>=5 && i<=7) {
		printf ("Infantil");
	}
	if (i>=8 && i<=10) {
		printf ("Juvenil");
	}
	if (i>=11 && i<=15) {
		printf ("Adolescente");
	}
	if (i>=16 && i<=30) {
		printf ("Adulto");
	}
	if (i>30) {
		printf ("Mestre");
	}
	return 0;
	
}
