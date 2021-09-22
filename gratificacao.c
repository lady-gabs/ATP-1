#include <stdio.h>

int main() {

  float e, f, H, g;
 // printf("Insira o numero de horas extras")
  scanf("%f", &e);
 // printf("Insira o numero de horas-falta")
  scanf("%f", &f);
  
  H= e-(0.75*f);
  
	if (H<=600){
		g=100.00;
  		printf ("%.2f", g);
  	}
  	if (H>=601 && H<=1200) {
 	 	g=200.00;
  		printf ("%.2f", g);
  	}
 	if (H>=1201 && H<=1800) {
 		g=300.00;
  		printf ("%.2f", g);
  	}
 	if (H>=1801 && H<=2400) {
 		g=400.00;
  		printf ("%.2f", g);
  	}
 	if (H>2400){
  		g=500.00;
  		printf ("%.2f", g);
  	}
  return 0;
}
