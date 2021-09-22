#include <stdio.h>

int main() {
	int filhos, i=0, j=0, k=0;
	float salario, msal, mfi, maiorsal=0, porc, saltot=0;
	
	do{
		scanf("%f", &salario);

		if(salario<0)
			break;
		scanf("%d", &filhos);
		if(salario<=150)
			j++;
		if(filhos>0)
			k=k+filhos;
		if(salario>=0)
			saltot= saltot + salario;
		if (salario>maiorsal)
			maiorsal=salario;
		i++;
		
	}while(salario>=0);
	
	msal=(float)saltot/i;
	mfi=(float) k/i;
	porc=(float)(j*100)/i;
	
	printf("%.2f %.2f %.2f %.2f%%", msal, mfi, maiorsal, porc);
	
	return 0;
	
}
