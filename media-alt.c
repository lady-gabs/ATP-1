#include <stdio.h>

int main() {
	int i=0,idade;
	float h, media, soma=0;
	
	do{
		scanf("%d", &idade);
		
		if(idade<=0)
			break;
			
		scanf("%f", &h);
		
		if(idade>50){
			i++;
			soma=soma+h;
		}
	}while (idade>0);
	
	media=((float)soma/i);
	
	printf("%.2f", media);
	
	return 0;
}
