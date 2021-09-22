#include <stdio.h>

int main() {
	int cod, quant;
	float pu, pt, vd, pf;
	// inserir o codigo do produto
	scanf("%d", &cod);
	// inserir quantidade do produto
	scanf("%d", &quant);
	
	if (cod>=1 && cod<=10) {
		pu=10.00;
		pt=pu*quant;
		if (pt<=249.99) {
			vd=0.05*pt;
			pf=pt-vd;
		}
		if (pt>=250.00 && pt<=499.99) {
			vd=0.1*pt;
			pf=pt-vd;
		}
		if (pt>=500.00) {
			vd=0.15*pt;
			pf=pt-vd;
		}
	}
	if (cod>=11 && cod<=20) {
		pu=15.00;
		pt=pu*quant;
		if (pt<=249.99) {
			vd=0.05*pt;
			pf=pt-vd;
		}
		if (pt>=250.00 && pt<=499.99) {
			vd=0.1*pt;
			pf=pt-vd;
		}
		if (pt>=500.00) {
			vd=0.15*pt;
			pf=pt-vd;
		}
	}
	if (cod>=21 && cod<=30) {
		pu=20.00;
		pt=pu*quant;
		if (pt<=249.99) {
			vd=0.05*pt;
			pf=pt-vd;
			}
		if (pt>=250.00 && pt<=499.99) {
			vd=0.1*pt;
			pf=pt-vd;
			}
		if (pt>=500.00) {
			vd=0.15*pt;
			pf=pt-vd;		
			}
	}
	if (cod>=31 && cod<=40) {
		pu=30.00;
		pt=pu*quant;
		if (pt<=249.99) {
			vd=0.05*pt;
			pf=pt-vd;
			}
		if (pt>=250.00 && pt<=499.99) {
			vd=0.1*pt;
			pf=pt-vd;
			}
		if (pt>=500.00) {
			vd=0.15*pt;
			pf=pt-vd;
			}
	}
	printf("%.2f %.2f %.2f %.2f", pu, pt, vd, pf);
	return 0;
}
