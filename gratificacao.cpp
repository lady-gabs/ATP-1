#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){

  float e, f, H, grat;
  printf("Insira o numero de horas extras:");
  scanf("%.2f", &e);
  printf("Insira o numero de horas-falta:");
  scanf("%.2f", &f);
  
  H= e - ((3/4)*f);
  
  if (H<=600)
    printf ("Voce recebera R$ 100,00");
  if (H>=601 && H<=1200)
    printf ("Voce recebera R$ 200,00");
  if (H>=1201 && H<=1800)
    printf ("Voce recebera R$ 300,00");
  if (H>=1801 && H<=2400)
    printf ("Voce recebera R$ 400,00");
  if (H>2400)
    printf ("Voce recebera R$ 500,00");
  
  getch();
}
