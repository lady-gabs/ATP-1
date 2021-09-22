#include <stdio.h>

int main() {
    int i, j, k;
    float medias[2][5][2];
    float media, m1=0, m2;

    for (i=0; i<2; i++) {
        for (j=0; j<5; j++){
            for(k=0; k<2; k++){
                scanf("%f", &medias[i][j][k]);
            }
        }
    }
        for (i=0; i<2; i++) {
            printf("Turma %d\n", i+1);
            for (j=0; j<5; j++){
                media=(medias[i][j][0]+medias[i][j][1])/2;
                printf("%.2f\n", media);
            }
        }
    printf("Media das turmas\n");
    for(i=0; i<2; i++){
        for(j=0; j<5; j++){
            for(k=0; k<2; k++){
                m1=m1+medias[i][j][k];
            }
        }
        m2=m1/10;
        printf("%.2f\n", m2);
        m1=0;
    }
    return 0;
}