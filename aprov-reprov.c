#include <stdio.h>

int main() {
	int n, num_mat, freq, totalreprov=0, i=0;
	float nota1, nota2, nota3, media, maiornota=0, menornota=11, repbfreq=0, bfreq;
	scanf ("%d", &n);
	
	for(i=0; i<n; i++){
		scanf ("%d", &num_mat);
		scanf ("%f", &nota1);
		scanf ("%f", &nota2);
		scanf ("%f", &nota3);
		scanf ("%d", &freq);
		
		media = (nota1+nota2+nota3)/3 ;
		
		if (media>maiornota)
			maiornota=media;
		if (media<menornota)
			menornota=media;
		
		if (media>=6 && freq>=40) {
			printf("%d %.2f Aprovado\n", num_mat, media);
		}else {
			printf("%d %.2f Reprovado\n", num_mat, media);
			totalreprov++;
			
			if (freq<40)
				repbfreq++;
		}
	}
	
	bfreq=(repbfreq/n)*100;
	
	printf("%.2f ", maiornota);
	printf("%.2f ", menornota);
	printf("%d ", totalreprov);
	printf("%.2f%%", bfreq);
	
	return 0;
}
