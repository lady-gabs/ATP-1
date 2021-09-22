#include <stdio.h>

int main() {
	int voto, i=0, tvn=0, tvb=0, tc1=0, tc2=0, tc3=0, tc4=0;
	float pnt, pbt;
	
	do {
		scanf("%d", &voto);
		
		if (voto==1){
			tc1++;
		}
		else if (voto==2){
			tc2++;
		}
		else if (voto==3){
			tc3++;
		}
		else if (voto==4){
			tc4++;
		}
		else if (voto==5){
			tvn++;
		}
		else if (voto==6){
			tvb++;
		}
		else if (voto==0){
			break;
		}
		i++;	
	}while(voto!=0);
	
	pnt=((float)tvn/i)*100;
	pbt=((float)tvb/i)*100;
	
	printf("%d %d %d %d %d %d\n", tc1, tc2, tc3, tc4, tvn, tvb);
	printf("%.2f%% %.2f%%", pnt, pbt);

	return 0;
}
