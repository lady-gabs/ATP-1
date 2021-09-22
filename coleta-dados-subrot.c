#include <stdio.h>

void coleta(int *idade, char *sexo, float *salario, int *filhos, int tam_v);
float media(float *salario, int tam_v);
void idades(int *idade, int *maior, int *menor, int tam_v);
int qtd(char *sexo, int *filhos, float *salario, int tam_v);

int main(){

    const int tam=15;
    int idade[tam], fi[tam];
    float salario[tam];
    char sexo[tam];
    int maior, menor;

    coleta(idade, sexo, salario, fi, tam);
    idades(idade, &maior, &menor, tam);
    printf("%.2f ", media(salario, tam));
    printf("%d ", menor);
    printf("%d ", maior);
    printf("%d", qtd(sexo, fi, salario, tam));
    return 0;
}
void coleta(int *idade, char *sexo, float *salario, int *filhos, int tam_v){
    int i;
    for(i=0; i<tam_v; i++){
        scanf(" %d", &idade[i]);
        scanf(" %c", &sexo[i]);
        scanf("%f", &salario[i]);
        scanf(" %d", &filhos[i]);
    }
}
float media(float *salario, int tam_v){
    int i;
    float med=0;

    for(i=0; i<tam_v; i++){
        med= med+salario[i];
    }
    med=med/tam_v;
    return med;
}
void idades(int *idade, int *maior, int *menor, int tam_v){
    int i;
    *maior=idade[0];
    *menor=idade[0];

    for (i = 0; i < tam_v; i++){
        if(idade[i]< *menor)
            *menor = idade[i];
        if(idade[i]> *maior)
            *maior=idade[i];
    }
    
}
int qtd(char *sexo, int *filhos, float *salario, int tam_v){
    int i, quant=0;

    for (i=0; i < tam_v; i++){
        if (sexo[i]=='M' && filhos[i]==3 && salario[i]<=500){
            quant++;
        }
        
    }
    return quant;
}