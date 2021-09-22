#include <stdio.h>

int main() {
    int i, j, m,n, div=0;
    
	scanf("%d", &m);
	scanf("%d",&n);

    for (i=m; i<=n; i++) {
		for (j=1; j<=i; j++){
			if (i%j == 0)
				div++;
		}

      	if ((div == 2) || (div == 1 && i == 1))
			printf("%d ",i);
	}
	return 0;
}

