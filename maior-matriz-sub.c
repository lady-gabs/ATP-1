#include <stdio.h>

int elemento(int mat[][10], int linhas, int colunas);

int main(){

    const int tamanho=10;
    int i, j;
    int mat[10][10];

    for(i=0; i<tamanho; i++){
        for (j=0; j<tamanho; j++){
            scanf(" %d", &mat[i][j]);
        }   
    }
    printf("%d", elemento(mat, tamanho, tamanho));
    return 0;
}

int elemento(int mat[][10], int linhas, int colunas){
    int i, j;
    int maior;
    maior=mat[0][0];
    for (i=0; i<linhas; i++){
        for (j=0; j<colunas; j++){
            if(j>i){
                if (mat[i][j]>maior){ //(i*colunas) pula a linha toda, pois vai varrendo ela de acordo com o j rodando, varre a alocação na memoria
                    maior= mat[i][j];
                }
            }
        }
    }
    return maior;  
}