#include <stdio.h>
#include <math.h>

int main() {
	float a, b, m, M;
	int operacao, d, p;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%d", &operacao);
	
	if(operacao==1){
		m= (a+b)/2;
		if(m<0){
			M=m*(-1);
			printf("%.2f", M);
		}
		else{
			M=m;
			printf("%.2f", M);
		}
	}else if (operacao==2){
		if(a>b){
			d=a-b;
			printf("%d", d);
		}
		else {
			d=b-a;
			printf("%d", d);
		}
	}else if (operacao==3){
		p=a*b;
		printf("%d", p);
	}else if (operacao!=1 && operacao!=2 && operacao!=3){
		printf("Entrada incorreta");
	}
	return 0;
}
