#include <stdio.h>

int main() {
	int idade, n=0, i=0, reg=0, bom=0, otimo=0;
	char op;
	float media, porc;
	
	for (i=0; i<15; i++){
		scanf("%d", &idade);
		scanf(" %c", &op);
		if(op=='1')
			reg++;
		else if(op=='2')
			bom++;
		else if(op=='3'){
			n= n + idade;
			otimo++;
		}
	}
	media=(float)n/otimo;
	porc=(float)bom*100/15;
	
	printf("%.2f %d %.2f%%", media, reg, porc);
	
	return 0;
}
