#include <stdio.h>

int main() {
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	
	if (x<=y && x<=z){
		if (y<=z) {
			printf("%d", z);
		}
		else {
		printf("%d", y);
		}
	}
	if (y<=x && y<=z){
		if (x<=z) {
			printf("%d", z);
		}
		else {
		printf("%d", x);
		}
	}
	if (z<=x && z<=y){
		if (x<=y) {
			printf("%d", y);
		}
		else {
		printf("%d", x);
		}
	}
	return 0;
}
