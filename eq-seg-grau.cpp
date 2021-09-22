#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	float a,b,c,delta,x1,x2;
	printf("insira o primeiro numero:");
	scanf("%f", &a);
	printf("insira o segundo numero:");
	scanf("%f", &b);
	printf("insira o terceiro numero:");
	scanf("%f", &c);
	
	if (a==0)
	 printf("Os valores não formam uma equação do segundo grau");
	else
	{
	  delta= pow(b,2) - (4*a*c);
	 if (delta<0)
	  printf("a equacao não possui raízes de valor real");
	 else {
	  	if (delta==0)
	      {
	       x1= (-b)/(2*a);
	       printf("a raiz da equacao e: %.2f", x1);
	       }
	    else {
	         (x1=((-b) + sqrtf(delta))/2*a);
	         (x2=((-b) - sqrtf(delta))/2*a);
	         printf("x1 e x2 sao: %.2f \n %.2f", x1, x2);
	     }
	 }
    }
	getch();
}

