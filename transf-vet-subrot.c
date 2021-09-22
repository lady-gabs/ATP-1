#include <stdio.h>

void maior_menor(int *x, int *a, int *b, int tam_v, int *cont_a, int *cont_b);

int main(){
    const int tam=30;
    int i, j, k, l, m;
    int veta[30], vetb[30];
    int vet[30];

    for (i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }
    
    maior_menor(vet, veta, vetb, tam, &j, &k);

    for (l=0; l<j; l++){
        printf("%d ", veta[l]);    
    }
    for (m=0; m<k; m++){
        printf("%d ", vetb[m]);
    }
    return 0;
}

void maior_menor(int *x, int *a, int *b, int tam_v, int *cont_a, int *cont_b){
    int i;
    *cont_a=0;
    *cont_b=0;

    for (i=0; i<tam_v; i++){
        if(x[i]>0){
            a[*(cont_a)]=x[i];
            (*cont_a)++;
        }
        else{
            b[*(cont_b)]=x[i];
            (*cont_b)++;
        }
    }   
}