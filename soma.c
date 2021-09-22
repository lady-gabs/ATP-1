#include <stdio.h>

int soma(int n);

int main(){
    int x;

    scanf("%d",&x);
    printf("%d", soma(x));

    return 0;
}
int soma(int n){
    int i, somatoria=0;
    for(i=0; i<=n; i++){
        somatoria=somatoria+i;
    }
    return somatoria;
}