#include <stdio.h>

int main() {
	int a[20], b[20], i=0;
	
	for (i=0; i<20;i++) {
		scanf(" %d", &a[i]);
	}
	
	for (i=0; i<20; i++){
		if (a[i]>0){
			b[i]=a[i];	
			printf("%d ", b[i]);
		}
	}
	
	return 0;
}
