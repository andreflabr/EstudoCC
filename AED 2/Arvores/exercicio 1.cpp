#include<bits/stdc++.h>
/////////////////////////////////////////////////////////////////////////////
struct no{
    struct no *esq;
    struct no *dir;
    char dado;
};
typedef struct no *Arvore;
/////////////////////////////////////////////////////////////////////////////
void insertNode(Arvore *t, char d){
    if (*t == NULL){
        *t = (struct no*) malloc(sizeof(struct no));
        if ( *t != NULL ){
            (*t)->esq = NULL;
            (*t)->dir = NULL;
            (*t)->dado = d;
            printf("dado: %c\n",(*t)->dado);
        }else
            printf("Memoria insuficiente");
    }else if (d < (*t)->dado)
        insertNode(&(*t)->esq, d);
    else if (d > (*t)->dado)
        insertNode(&(*t)->dir, d);
    else
        printf("Duplicacao de no");
}
/////////////////////////////////////////////////////////////////////////////
int main(){
    Arvore A = NULL;
    int x;
    char y;

    do{
        printf("1-inserir Letra\n2-Numero de nos\n3-Altura\n4-Nos folhas\n5-Sair");
        scanf("%d", &x);


        switch(x){
            case 1:
                printf("Digite a letra a adicionar:\n");
                scanf("%c", &y);
                insertNode(&A, y);
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
            
        }
    }while(x!=5);

    return 0;
}
