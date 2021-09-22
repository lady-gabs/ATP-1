#include <stdio.h>

int main() {
	int idade, i, j=0, k=0, l=0, m=0, n=0;
	float p, h, media, porc;
	char co, cc;
	
	for (i=0; i<20; i++){
		scanf("%d", &idade);
		scanf("%f", &p);
		scanf("%f", &h);
		scanf(" %c", &co);
		scanf(" %c", &cc);
		
		if (idade>50 && p<60)
			j++;
		if (h>1.50){
			l= l + idade;
			k++;
		}
		if (co=='A')
			m++;
		if ((cc == 'R') && (co != 'A'))
			n++;
	}
	media=((float)l/k);
	porc= ((float)m/i)*100;
	
	printf("%d ", j);
	printf("%.2f ", media);
	printf("%.2f%% ", porc);
	printf("%d", n);
	
	return 0;
	
}
