#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct endereco{
    char rua[50];
    int num;
    char bairro[50];
}address;
typedef struct pessoa{
    char tel[15];
    char nome[50];
    address add;
}people;
typedef struct cliente{
    people pessoa_c;
}client;
typedef struct motoqueiro{
    people pessoa_mot;
    int cod_mot;
}motor;
typedef struct pizza{
    int cod_pizza;
    char nome_pi[50];
    float preco;
}piz;
typedef struct pedido{
    int cod_ped;
    char tel_client [15];
    int cdg_pizza;
    int cdg_mot;
    int situacao;
}request;

int cad_client (client* pessoa_c, int *cont_x);
int cad_mot (motor* pessoa_mot, int *cont_y);
int cad_pizza (piz* cadpizza, int* cont_z);
int cad_pedido (request* pdd, int* cont_w, client* cl, piz* cpiz, int cont_z, int cont_x, int* coodped);
void despacho (request* ped, int cont_w, motor* c_mot, int cont_y);
void rec_pedido (request* rec, int cont_w);
void list_ped_sit (request* sit, int cont_w);
void list_cli_ped (request* cli, client* pessoa, int cont_w, int cont_x);
void list_mot_ped (request* mot, motor* moto, int cont_w, int cont_y);

int main(){
    request w[6];
    client x[5];
    motor y[2];
    piz z[3];
    int cont_w=0, cont_x=0, cont_y=0, cont_z=0, coodped=0;
    int opcao, verif, i;

    for (i=0; i<6; i++){
        w[i].cod_ped=0;
    }
    
    do{
        scanf(" %d", &opcao);
        switch (opcao){
            case 1:{
                verif=cad_client(x, &cont_x);
                if (verif==0){
                    printf("Cliente cadastrado com sucesso\n");
                }
                if (verif==2){
                    printf("Numero maximo de clientes cadastrados\n");
                }
                if (verif == 1){
                    printf("Cliente ja cadastrado\n");
                }
                break;
            }
            case 2:{
                verif=cad_mot(y, &cont_y);
                if (verif==0){
                    printf("Motoqueiro cadastrado com sucesso\n");
                }
                if (verif==2){
                    printf("Numero maximo de motoqueiros cadastrados\n");
                }
                if (verif==1){
                    printf("Motoqueiro ja cadastrado\n");
                }
                break;
            }
            case 3:{
                verif=cad_pizza(z, &cont_z);
                if (verif==0){
                    printf("Pizza cadastrada com sucesso\n");
                }
                if (verif==2){
                    printf("Numero maximo de pizzas cadastrados\n");
                }
                if (verif==1){
                    printf("Pizza ja cadastrada\n");
                }
                break;
            }
            case 4:{
                verif=cad_pedido(w, &cont_w, x, z, cont_z, cont_x, &coodped);
                if (verif==0){
                    printf("Pedido cadastrado\n");
                }
                if (verif==1){
                    printf("Pizza nao cadastrada\n");
                }
                if (verif==2){
                    printf("Numero maximo de pedidos realizados\n");
                }
                if (verif==3){
                    printf("Cliente nao encontrado\n");
                }
                break;
            }
            case 5:{
                despacho(w, cont_w, y, cont_y);
                break;
            }
            case 6:{
                rec_pedido(w, cont_w);
                break;
            }
            case 7:{
                list_ped_sit(w, cont_w);
                break;
            }
            case 8:{
                list_cli_ped(w, x, cont_w, cont_x);
                break;
            }
            case 9:{
                list_mot_ped(w, y, cont_w, cont_y);
                break;
            }
            case 0:{
                printf("Encerrando sistema");
                break; 
            }
            default:{
                printf("Opcao invalida\n");
                break;
            }
        }
    }while(opcao!=0);
}

int cad_client (client* pessoa_c, int *cont_x){
    int i;
    char tele[15];

    if((*cont_x)==5){
        return 2;
    }
    scanf(" %[^\n]", tele);  
    for(i=0; i<(*cont_x); i++){
        if(strcmp(tele, pessoa_c[i].pessoa_c.tel)==0){
            return 1;
        }
	}
    strcpy(pessoa_c[*cont_x].pessoa_c.tel, tele);
    scanf(" %[^\n]", pessoa_c[*cont_x].pessoa_c.nome);
    scanf(" %[^\n]", pessoa_c[*cont_x].pessoa_c.add.rua);
    scanf(" %d", &pessoa_c[*cont_x].pessoa_c.add.num);
    scanf(" %[^\n]", pessoa_c[*cont_x].pessoa_c.add.bairro);

    (*cont_x)++;
    return 0;
}

int cad_mot (motor* pessoa_mot, int *cont_y){
    int i;
    int cod_moto;

    if((*cont_y)==2){
        return 2;
    }
    scanf(" %d", &cod_moto);
    for(i=0; i<(*cont_y); i++){
        if(cod_moto==pessoa_mot[i].cod_mot){
            return 1;
            break;
        }
	}
    pessoa_mot[*cont_y].cod_mot=cod_moto;
    scanf(" %[^\n]", pessoa_mot[*cont_y].pessoa_mot.tel);
    scanf(" %[^\n]", pessoa_mot[*cont_y].pessoa_mot.nome);
    scanf(" %[^\n]", pessoa_mot[*cont_y].pessoa_mot.add.rua);
    scanf(" %d", &pessoa_mot[*cont_y].pessoa_mot.add.num);
    scanf(" %[^\n]", pessoa_mot[*cont_y].pessoa_mot.add.bairro);

    (*cont_y)++;
    return 0;
}

int cad_pizza (piz* cadpizza, int* cont_z){
    int codpizza;
    int i;

    if((*cont_z)==3){
        return 2;
    }
    scanf(" %d", &codpizza);
    for(i=0; i<(*cont_z); i++){
        if(codpizza==cadpizza[i].cod_pizza){
            return 1;
            break;
        }
    }
    cadpizza[*cont_z].cod_pizza=codpizza;
    scanf(" %[^\n]", cadpizza[*cont_z].nome_pi);
    scanf(" %f", &cadpizza[*cont_z].preco);

    (*cont_z)++;
    return 0;

}
int cad_pedido (request* pdd, int* cont_w, client* cl, piz* cpiz, int cont_z, int cont_x, int* coodped){
    char telcli[15];
    int cod_piz, i, aux=0, aux2=0;

    if((*cont_w)==6){
        return 2;
    }

    scanf(" %[^\n]", telcli);
    for(i=0; i<(cont_x); i++){
        if(strcmp(telcli, cl[i].pessoa_c.tel)==0){
            aux=1;
            break;
        }
	}
    if (aux==1){
        scanf(" %d", &cod_piz);
        for(i=0; i<(cont_z); i++){
            if(cod_piz==cpiz[i].cod_pizza){
                aux2=1;
                break;
            }
        }
        if (aux2==1){
            pdd[*cont_w].cdg_pizza=cod_piz;
            strcpy(pdd[*cont_w].tel_client,telcli);
            pdd[*cont_w].cdg_mot=0;
            pdd[*cont_w].situacao=1;
            (pdd[*cont_w].cod_ped)=*coodped;
            (*coodped)++;
            (*cont_w)++;
            return 0;
        }
        return 1;
    }
    else{
        return 3;
    }
}
void despacho (request* ped,int cont_w,motor* c_mot, int cont_y){
    int i, j, cdgmotoq, cdgpedido, contped=0, contmot=0;

    scanf(" %d", &cdgpedido);
    for (i = 0; i<cont_w; i++){
        if(cdgpedido==ped[i].cod_ped){
            if (ped[i].situacao==1){
                scanf(" %d", &cdgmotoq);
                for (j=0; j<cont_y; j++){
                    if (cdgmotoq==c_mot[j].cod_mot){
                        printf("Despachando pedido\n");
                        ped[i].situacao=2;
                        ped[i].cdg_mot=c_mot[j].cod_mot;
                        contped=1;
                        break;
                    } 
                }
                if (contped==0){
                    printf("Motoqueiro nao encontrado\n");
                }
            }else if(ped[i].situacao==2){
                printf("Pedido ja despachado\n");

            }else if(ped[i].situacao==3){
                printf("Pedido ja entregue\n");
            }
            contmot=1;
            break;
        }
    }
    if (contmot==0){
        printf("Pedido nao encontrado\n");
    }
}
void rec_pedido (request* rec, int cont_w){
    int codiped, i, confia=0;

    scanf(" %d", &codiped);
    for (i=0; i<cont_w; i++){
        if (codiped==rec[i].cod_ped){
            if (rec[i].situacao==2){
                rec[i].situacao=3;
                printf("Pedido entregue\n");
            }
            else if (rec[i].situacao==3){
                printf("Entrega ja realizada\n");
            }
            confia=1;
        }   
    }
    if(confia==0){
        printf("Pedido nao encontrado\n");
    }       
}
void list_ped_sit (request* sit, int cont_w){
    int situ, i, contsit=0;

    scanf(" %d", &situ);
    if (situ>3||situ<=0){
        printf("Opcao invalida\n");
    }
    if (situ>=1 && situ<=3){
        for (i=0; i<cont_w; i++){
            if (situ==sit[i].situacao){
                printf("Pedido: %d\n", sit[i].cod_ped);
                printf("Cliente: %s\n", sit[i].tel_client);
                printf("Pizza: %d\n", sit[i].cdg_pizza);
                printf("Motoq: %d\n", sit[i].cdg_mot);
                contsit=1;
            }  
        }     
        if (contsit==0){
            printf("Sem itens nessa situacao\n");
        }
    }   
}
void list_cli_ped (request* cli, client* pessoa, int cont_w, int cont_x){
    char telef[15];
    int i=0, j=0, contped=0, contcli=0;

    scanf(" %[^\n]", telef);
    for (j=0; j < cont_x; j++){
        if (strcmp(telef, pessoa[j].pessoa_c.tel)==0){
            contcli=1;
            for (i=0; i<cont_w; i++){
                if (strcmp(telef, cli[i].tel_client)==0){
                    printf("Pedido: %d\n", cli[i].cod_ped);
                    printf("Situacao: %d\n", cli[i].situacao);
                    printf("Pizza: %d\n", cli[i].cdg_pizza);
                    printf("Motoq: %d\n", cli[i].cdg_mot);
                    contped=1;
                }
            }          
        }
    }     
    if (contcli==0){
        printf("Cliente nao encontrado\n");
    }
    else if (contped==0){
        printf("Cliente sem pedidos\n");
    }  
}
void list_mot_ped (request* mot, motor* moto, int cont_w, int cont_y){
    int codmotoq, i, j, contmot=0, contpedi=0;

    scanf(" %d", &codmotoq);
    for ( j=0; j<cont_y; j++){
        if (codmotoq==moto[j].cod_mot){
            for (i=0; i<cont_w; i++){
                if (mot[i].cdg_mot==codmotoq){
                    printf("Pedido: %d\n", mot[i].cod_ped);
                    printf("Situacao: %d\n", mot[i].situacao);    
                    contpedi=1;
                }               
            }
            contmot=1;   
        }   
    }
    if (contmot==0){
        printf("Motoqueiro nao encontrado\n");
    }
    else if(contpedi==0){
        printf("Motoqueiro sem pedidos\n");
    } 
}