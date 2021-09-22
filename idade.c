#include <stdio.h>

int main() {
	int i=0, n, prim=0, seg=0, ter=0, qua=0, qui=0, idade;
	float porc;
	
	scanf("%d", &n);
	
	do{
		scanf(" %d", &idade);
		if (idade<0)
			break;
		if(idade<=15)
			prim++;
		else if(idade>=16 && idade<=30)
			seg++;
		else if(idade>=31 && idade <=45)
			ter++;
		else if(idade>=46 && idade<=60)
			qua++;
		else if (idade>=61)
			qui++;
		i++;
	}while (i<n);
	porc=(float)(prim+qui)*100/i;
	
	printf("%d %d %d %d %d\n", prim, seg, ter, qua, qui);
	printf("%.2f%%", porc);
	
	return 0;
}
