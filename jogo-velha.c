#include <stdio.h>

int main() {
    char tab[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int i=0, j, k;

    while(i<=9){
        printf("linha e coluna de 0 a 2:\n");
        scanf(" %d", &j);     //linha   
        scanf(" %d", &k);     //coluna
        if(tab[j][k]==' ' && j<3 && k<3 && j>=0 && k>=0){ //tab[j][k]==' ' verifica se a casa ta vazia
            if(i%2==0){             //jogador 1
                tab[j][k]='x';
                i++;
            }else{                   //jogador 2
                tab[j][k]='o';
                i++;
            }
        }else{
            printf ("Erro\n");
        }
        if((tab[0][0]=='x' && tab[0][1]=='x' && tab[0][2]=='x')||
        (tab[1][0]=='x' && tab[1][1]=='x' && tab[1][2]=='x')||
        (tab[2][0]=='x' && tab[2][1]=='x' && tab[2][2]=='x')||
        (tab[0][0]=='x' && tab[1][0]=='x' && tab[2][0]=='x')||
        (tab[0][1]=='x' && tab[1][1]=='x' && tab[2][1]=='x')||
        (tab[0][2]=='x' && tab[1][2]=='x' && tab[2][2]=='x')||
        (tab[0][0]=='x' && tab[1][1]=='x' && tab[2][2]=='x')||
        (tab[0][2]=='x' && tab[1][1]=='x' && tab[2][0]=='x')){
            if(tab[0][0]=='x' && tab[0][1]=='x' && tab[0][2]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Linha 0\n");
            }
            if(tab[1][0]=='x' && tab[1][1]=='x' && tab[1][2]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Linha 1\n");
            }
            if(tab[2][0]=='x' && tab[2][1]=='x' && tab[2][2]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Linha 2\n");
            }
            if(tab[0][0]=='x' && tab[1][0]=='x' && tab[2][0]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Coluna 0\n");
            }
            if(tab[0][1]=='x' && tab[1][1]=='x' && tab[2][1]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Coluna 1\n");
            }
            if(tab[0][2]=='x' && tab[1][2]=='x' && tab[2][2]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Coluna 2\n");
            }
            if (tab[0][0]=='x' && tab[1][1]=='x' && tab[2][2]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Diagonal principal\n");
            }
            if(tab[0][2]=='x' && tab[1][1]=='x' && tab[2][0]=='x'){
                printf("Jogador 1 venceu\n");
                printf("Diagonal secundaria\n");
            }
            printf("%c%c%c\n%c%c%c\n%c%c%c", tab[0][0], tab[0][1], tab[0][2], tab[1][0], tab[1][1], tab[1][2], tab[2][0], tab[2][1], tab[2][2]);
            break;
        }
        if((tab[0][0]=='o' && tab[0][1]=='o' && tab[0][2]=='o')||
        (tab[1][0]=='o' && tab[1][1]=='o' && tab[1][2]=='o')||
        (tab[2][0]=='o' && tab[2][1]=='o' && tab[2][2]=='o')||
        (tab[0][0]=='o' && tab[1][0]=='o' && tab[2][0]=='o')||
        (tab[0][1]=='o' && tab[1][1]=='o' && tab[2][1]=='o')||
        (tab[0][2]=='o' && tab[1][2]=='o' && tab[2][2]=='o')||
        (tab[0][0]=='o' && tab[1][1]=='o' && tab[2][2]=='o')||
        (tab[0][2]=='o' && tab[1][1]=='o' && tab[2][0]=='o')){
            if(tab[0][0]=='o' && tab[0][1]=='o' && tab[0][2]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Linha 0\n");
            }
            if(tab[1][0]=='o' && tab[1][1]=='o' && tab[1][2]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Linha 1\n");
            }
            if(tab[2][0]=='o' && tab[2][1]=='o' && tab[2][2]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Linha 2\n");
            }
            if(tab[0][0]=='o' && tab[1][0]=='o' && tab[2][0]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Coluna 0\n");
            }
            if(tab[0][1]=='o' && tab[1][1]=='o' && tab[2][1]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Coluna 1\n");
            }
            if(tab[0][2]=='o' && tab[1][2]=='o' && tab[2][2]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Coluna 2\n");
            }
            if (tab[0][0]=='o' && tab[1][1]=='o' && tab[2][2]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Diagonal principal\n");
            }
            if(tab[0][2]=='o' && tab[1][1]=='o' && tab[2][0]=='o'){
                printf("Jogador 2 venceu\n");
                printf("Diagonal secundaria\n");
            }
            printf("%c%c%c\n%c%c%c\n%c%c%c", tab[0][0], tab[0][1], tab[0][2], tab[1][0], tab[1][1], tab[1][2], tab[2][0], tab[2][1], tab[2][2]);
            break;
        }
        if(i==9){
            printf("Empate\n");
            printf("%c%c%c\n%c%c%c\n%c%c%c", tab[0][0], tab[0][1], tab[0][2], tab[1][0], tab[1][1], tab[1][2], tab[2][0], tab[2][1], tab[2][2]);
            break;
        }
    }
    return 0;
}