#include <stdio.h>
#include <stdlib.h>

typedef enum{
    livro=1, tese, periodico
}IDENTIFICADOR;
typedef enum{
    mestrado=1, doutorado
}MODALIDADE;
typedef struct {
    char autor[30];
    char titulo[30];
    int ano;
    char editora[30];
    char cidade[30];
}LIVRO;
typedef struct{
    char autor[30];
    char titulo[30];
    int mes;
    int ano;
    char universidade[30];
    char posgraduacao[30];
    char orientador[30];
    MODALIDADE modalidade;   //A modalidade pode ser mestrado (valor: 1) ou doutorado (valor: 2)
}TESE;
typedef struct {
    char titulo[30];
    int volume;
    int mes;
    int ano;
    char editora[30];
    char cidade[30];
    int paginas;
}PERIODICO;

typedef union{
    LIVRO livro;
    TESE tese;
    PERIODICO periodico;
}TIPO;
typedef struct{
    TIPO obra;
    IDENTIFICADOR identificador;
}OBRA;

void cadastrolivro(OBRA* cadastro_l, int* contador);
void cadastrotese(OBRA* cadastro_t, int* contador);
void cadastroperiodico(OBRA* cadastro_p, int* contador);
void consultalivro(OBRA* consulta_l, int contador);
void consultatese(OBRA* consulta_t, int contador);
void consultaperiodico(OBRA* consulta_p, int contador);

int main(){
    int opcao1, opcao2;
    OBRA acervo[5];
    int cont_limite=0; //vai até 5 que é o numero de vezes que pode ocorrer o cadastro

    do{
        scanf(" %d", &opcao1); //cadastro, consulta ou encerramento
        switch (opcao1){        
            case 1:{  
                if(cont_limite>=5){
                    printf("Limite de cadastros excedido!\n");
                    break;
                }
                else{
                    scanf(" %d", &opcao2); //escolher entre livro, tese e periodico
                    switch (opcao2){               
                        case livro:{
                            cadastrolivro(acervo, &cont_limite);
                            break;
                        }
                        case tese:{
                            cadastrotese(acervo, &cont_limite);
                            break;
                        }
                        case periodico:{
                            cadastroperiodico(acervo, &cont_limite);
                            break;
                        }
                        default:
                            break;
                        }
                    break;
                }
            }
            case 2:{    
                scanf(" %d", &opcao2);
                switch (opcao2){               
                    case livro:{
                        consultalivro(acervo, cont_limite);
                        break;
                    }
                    case tese:{
                        consultatese(acervo, cont_limite);
                        break;
                    }
                    case periodico:{
                        consultaperiodico(acervo, cont_limite);
                        break;
                    }
                    default:
                        break;
                }
                break;  
            }
            case 3:{
                printf("Fim de execucao\n");
                break;
            }
            default:
                break;
        }

    }while(opcao1!=3);
    return 0;
}
void cadastrolivro(OBRA* cadastro_l, int* contador){

    scanf(" %[^\n]", cadastro_l[*contador].obra.livro.autor);
    scanf(" %[^\n]", cadastro_l[*contador].obra.livro.titulo);
    scanf(" %d", &cadastro_l[*contador].obra.livro.ano);
    scanf(" %[^\n]", cadastro_l[*contador].obra.livro.editora);
    scanf(" %[^\n]", cadastro_l[*contador].obra.livro.cidade);
    cadastro_l[*contador].identificador=livro;
    printf("-----Livro Cadastrado!-----\n");
    (*contador)++;
}
void cadastrotese(OBRA* cadastro_t, int* contador){ 
    int modalidade;

    scanf(" %[^\n]", cadastro_t[*contador].obra.tese.autor);
    scanf(" %[^\n]", cadastro_t[*contador].obra.tese.titulo);
    scanf(" %d", &cadastro_t[*contador].obra.tese.mes);
    scanf(" %d", &cadastro_t[*contador].obra.tese.ano);
    scanf(" %[^\n]", cadastro_t[*contador].obra.tese.universidade);
    scanf(" %[^\n]", cadastro_t[*contador].obra.tese.posgraduacao);
    scanf(" %[^\n]", cadastro_t[*contador].obra.tese.orientador);
    scanf(" %d", &modalidade);

    cadastro_t[*contador].obra.tese.modalidade=(MODALIDADE)modalidade;
    cadastro_t[*contador].identificador=tese;
    printf("-----Tese Cadastrada!-----\n");
    (*contador)++;
}
void cadastroperiodico(OBRA* cadastro_p, int* contador){ 

    scanf(" %[^\n]", cadastro_p[*contador].obra.periodico.titulo);
    scanf(" %d", &cadastro_p[*contador].obra.periodico.volume);
    scanf(" %d", &cadastro_p[*contador].obra.periodico.mes);
    scanf(" %d", &cadastro_p[*contador].obra.periodico.ano);
    scanf(" %[^\n]", cadastro_p[*contador].obra.periodico.editora);
    scanf(" %[^\n]", cadastro_p[*contador].obra.periodico.cidade);
    scanf(" %d", &cadastro_p[*contador].obra.periodico.paginas);
    cadastro_p[*contador].identificador=periodico;
    printf("-----Periodico Cadastrado!-----\n");
    (*contador)++;
}
void consultalivro(OBRA* consulta_l, int contador){
    int i;
    for (i=0; i<contador; i++){
        if (consulta_l[i].identificador==livro){
            printf("Autor: %s\n", consulta_l[i].obra.livro.autor);
            printf("Titulo: %s\n", consulta_l[i].obra.livro.titulo);
            printf("Ano: %d\n", consulta_l[i].obra.livro.ano);
            printf("Editora: %s\n", consulta_l[i].obra.livro.editora);
            printf("Cidade: %s\n", consulta_l[i].obra.livro.cidade);
            printf("-----------------\n");
        }       
    }
}
void consultatese(OBRA* consulta_t, int contador){
    int i;
    for (i=0; i<contador; i++){
        if (consulta_t[i].identificador==tese)
        {
            printf("Autor: %s\n", consulta_t[i].obra.tese.autor);
            printf("Titulo: %s\n", consulta_t[i].obra.tese.titulo);
            printf("Mes: %d\n", consulta_t[i].obra.tese.mes);
            printf("Ano: %d\n", consulta_t[i].obra.tese.ano);
            printf("Universidade: %s\n", consulta_t[i].obra.tese.universidade);
            printf("Programa: %s\n", consulta_t[i].obra.tese.posgraduacao);
            printf("Orientador: %s\n", consulta_t[i].obra.tese.orientador);
            printf("Graduacao: %d\n", consulta_t[i].obra.tese.modalidade);
            printf("-----------------\n");
        }       
    }
}
void consultaperiodico(OBRA* consulta_p, int contador){
    int i;
    for (i=0; i<contador; i++){
        if (consulta_p[i].identificador==periodico)
        {
            printf("Titulo: %s\n", consulta_p[i].obra.periodico.titulo);
            printf("Volume: %d\n", consulta_p[i].obra.periodico.volume);
            printf("Mes: %d\n", consulta_p[i].obra.periodico.mes);
            printf("Ano: %d\n", consulta_p[i].obra.periodico.ano);
            printf("Editora: %s\n", consulta_p[i].obra.periodico.editora);
            printf("Cidade: %s\n", consulta_p[i].obra.periodico.cidade);
            printf("Numero de paginas: %d\n", consulta_p[i].obra.periodico.paginas);
            printf("-----------------\n");
        }        
    }    
}