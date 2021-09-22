#include <stdio.h>

int main() {
	int lo[15], lp[10], i=0, j=0;
	
	for (i=0; i<15; i++) {
		scanf("%d", &lo[i]);
	}
	for (i=0; i<10; i++) {
		scanf("%d", &lp[i]);
	}
	for (i=0; i<10; i++) {
		for (j=0; j<15; j++) {
			if (lo[j]==lp[i])
				printf("%d ", lp[i]);
		}
	}
	return 0;
}
