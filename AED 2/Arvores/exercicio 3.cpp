#include<bits/stdc++.h>
/////////////////////////////////////////////////////////////////////////////
struct no{
    struct no *esq;
    struct no *dir;
    char dado;
};
typedef struct no *Arvore;
int i=0, j=0;
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
bool comparar(Arvore a, Arvore b){
    if(a==NULL && b==NULL){
        return true;
    }if(a==NULL || b==NULL){
        return false;
    }
    return ((i == j) && comparar(a->esq, b->esq) && comparar(a->dir, b->dir));

}
/////////////////////////////////////////////////////////////////////////////
int main(){
    Arvore A = NULL;
    Arvore B = NULL;
    int x, result_nos, result_altura, result_folhas;
    char y, z;

    do{
        printf("1-inserir Letra na arvore 1\n2-inserir letra na arvore 2\n3-Comparar arvores\n4-Sair\n");
        scanf("%d", &x);

        switch(x){
            case 1:
                printf("Arvore 1 - Digite a letra a adicionar:\n");
                scanf(" %c", &y);
                i++;
                insertNode(&A, y);
                break;
            case 2:
                printf("Arvore 2 - Digite a letra a adicionar:\n");
                scanf(" %c", &y);
                j++;
                insertNode(&B, y);
                break;
            case 3:
                if(comparar(A,B)){
                    printf("Sao iguais!\n");
                }else {
                    printf("Sao diferentes!\n");
                }
                break;
        }
    }while(x!=4);
    return 0;
}