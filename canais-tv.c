#include <stdio.h>

int main () {
	int i=0, pessoas=0, canal, n=0, d=0, f=0, s=0;
	float porcn, porcd, porcf, porcs;
	
	do{
		scanf("%d", &canal);
			if (canal==0)
				break;
		scanf("%d", &pessoas);
		
		if(canal==4){
			n++;
		}else if(canal==5) {
			d++;
		}else if(canal==7){
			f++;
		}else if(canal==12){
			s++;
		}
		i++;
	}while (canal!=0);
	
	porcn=((float)n/i)*100;
	porcd=((float)d/i)*100;
	porcs=((float)s/i)*100;
	porcf=((float)f/i)*100;
	
	printf("%.2f%% ", porcn);
	printf("%.2f%% ", porcd);
	printf("%.2f%% ", porcf);
	printf("%.2f%%", porcs);
	
	return 0;
}
