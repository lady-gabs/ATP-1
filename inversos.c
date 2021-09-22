#include <stdio.h>

int main() {
	int n, i=1;
	float soma=0, j=0;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		j=(float)1/i;
		soma=soma+j;
	}
	
	printf("%.2f", soma);
	
	return 0;
}
