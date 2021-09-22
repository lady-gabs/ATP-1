#include<stdio.h>

int main(){
    float preco, fat_aumento, aumento, preco_novo;
    char situacao;
    int categoria;

    scanf(" %f", &preco);
    scanf(" %d", &categoria);
    scanf(" %c", &situacao);

    if(preco <= 25.0 && preco >= 0){
        if(categoria == 1){
            fat_aumento = 0.05;
        } else if(categoria == 2){
            fat_aumento = 0.08;
        } else if(categoria == 3){
            fat_aumento = 0.1;
        }
    } else if(preco > 25){
        if(categoria == 1){
            fat_aumento = 0.12;
        } else if(categoria == 2){
            fat_aumento = 0.15;
        } else if(categoria == 3){
            fat_aumento = 0.18;
        }
    }

    aumento = preco * fat_aumento;
    
    if(aumento<=0.99){
        if(situacao == 'R'){
            aumento = 1.0;
        } else if(situacao == 'N'){
            aumento = 2.0;
        }
    } else if(aumento>99.00){
        if(situacao == 'R'){
            aumento = 10.0;
        } else if(situacao == 'N'){
            aumento = 20.0;
        }
    }
	
	preco_novo = preco + aumento;

    printf("%.2f %.2f", aumento, preco_novo);
    
    return 0;
}
