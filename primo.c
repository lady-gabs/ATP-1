#include <stdio.h>

int main() {
    int i, j, k=0, m, n, div=0;
    
	scanf("%d", &m);
	scanf("%d", &n); // [m,n]

    for (i=m; i<=n; i++) {
    	div=0;
		for (j=1; j<=i; j++){
			if (i%j == 0)
				div++;
			if(div>2)
				break;
		}
      	if (div == 2)
			k=k+i;
	}
	printf("%d", k);
	return 0;
}