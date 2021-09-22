#include <stdio.h>

int qtd(int *x, int tam_v);

int main(){
    const int tam=30;
    int vet[tam];
    int i;

    for (i=0; i<30; i++){
        scanf("%d", &vet[i]);
    }
    
    printf("%d", qtd(vet, tam));
    return 0;
}

int qtd(int *x, int tam_v){
    int i;
    int par=0;

    for (i=0; i<tam_v; i++){
        if(x[i]%2==0){
            par++;
        }
    }
   return par; 
}