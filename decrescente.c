#include <stdio.h>

int main() {
	int a[10], b[10], c[20], i=0, j=0, k=0, d[20];
	
	for (i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for (i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	for (i=0; i<10; i++) {

		if (a[i]>a[i+1])
			c[i]=a[i];
		else 
			c[i]=a[i+1];
	
		for (j=0; j<10; j++){
			if (b[j]>b[j+1])
				c[i]=b[j];
			else
				c[i]=b[j+1];
		
			for (k=0; k<20; k++){
				if (c[i]>c[i+1])
					d[k]=c[i];
				else
					d[k]=c[i+1];

			}
			for (k=0; k<20; k++){
				printf("%d ", d[k]);
			}
		}

	}	
	return 0;
}

