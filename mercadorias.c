#include<stdio.h>

int main(){
    int codProduto[10], totalEstoque[10], codCliente, codPedido, qty, i;

    for(i=0; i<10; i++){
        scanf(" %d", &codProduto[i]);
        scanf(" %d", &totalEstoque[i]);
    }

    while(1){
        scanf(" %d", &codCliente);
        if (codCliente==0){
            break;
        }
        scanf(" %d %d", &codPedido, &qty);
        for(i=0; i<10; i++){
            if(codProduto[i] == codPedido){
                break;
            }
        }
        if (i==10)
            i=-1; //valor nao encontrado

        if(i!=-1){
            if(totalEstoque[i] < qty){
                printf("Sem estoque suficiente para esta compra\n");
            }else {
                totalEstoque[i] = totalEstoque[i] - qty;
                printf("Pedido atendido. Obrigado e volte sempre\n");
            }
        } else {
            printf("Codigo inexistente\n");
        }
    }
    for(i = 0; i<10; i++){
        printf("%d: %d\n",codProduto[i], totalEstoque[i]);
    }

    return 0;
}