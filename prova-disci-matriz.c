#include <stdio.h>
int main() {
    int codig, i, j, a;
    int alunos1=0, alunos2=0;
    int idade[8], cod[5], quant[8][5];
    float media=0;
    float m;

    for(i=0; i<8; i++){
        scanf(" %d", &idade[i]);
    }
    for(i=0; i<5; i++){
        scanf(" %d", &cod[i]);
    }
    for(i=0; i<8; i++){
        for(j=0; j<5; j++){
            scanf(" %d", &quant[i][j]);
        }
    }
    scanf(" %d", &codig);

    for(i=0; i<8; i++){
        a=0;
        for(j=0; j<5; j++){
            if(cod[j]==codig){
                if(quant[i][j]>2 && idade[i]>=18 && idade[i]<=25){
                    alunos1++;
                    break;
                }
            }
            else{
                a++;
            }
        }
        if(a==5){
            printf("Erro\n");
            break;
        }
    }
    if(a!=5)
        printf("%d\n", alunos1);

    for(i=0; i<8; i++){
        for(j=0; j<5; j++){
            if(quant[i][j] < 3){
                printf("%d %d %d\n", i, idade[i], cod[j]);
            }
        }
    }

    for(i=0; i<8; i++){
        for(j=0; j<5; j++){
            if(quant[i][j]==0){
                media = media + idade[i];
                alunos2++;
                break;
            }
        }
    }

    m = media/alunos2;
    printf("%.2f", m);

    return 0;
}