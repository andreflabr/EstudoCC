#include <bits/stdc++.h>
/////////////////////////////////////////////////////////////////////////////////////////////
int fim=0;
#define MAX 3
int lista[MAX];
/////////////////////////////////////////////////////////////////////////////////////////////
int vazia(){
	if(fim==0){
		return 1;
	}
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
void inserir(int valor){
	if(fim==MAX){ 
		printf("Nao inseriu %d, lista cheia\n", valor);
	} else {
		lista[fim]=valor;
		fim++; 
		printf("Inserido %d OK\n",valor);
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////
void remover(int pos){
	int i;
	if(!vazia()){
		if(pos > fim-1){
			printf("Posicao nao e valida (%d)\n",pos);
		} else {
			printf("Removido elemento %d da posicao (%d)\n",lista[pos],pos);
			for(i= pos; i < fim; i++){
				lista[i]=lista[i+1];
			}
			fim--;
		}
		} else {
		printf("Lista vazia, nao removido\n");
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////
void imprimir(){
	int i;
	if(!vazia()){ 
		for(i=0; i<fim; i++){
			printf("O elemento %d eh %d\n", i, lista[i]);
		}
	} else {
		printf("Lista Vazia\n");
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////
void ordenar(){
    int i,j, aux;
    for(i=0; i<MAX-1; i++){
        for(j=1; j<MAX-i; j++){
            if(lista[j]<lista[j-1]){
                aux=lista[j];
                lista[j]=lista[j-1];
                lista[j-1]=aux;
            }
        }
    }
    printf("Numeros ordenados!\n"); 
}
/////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int x, valor, r_valor;

    do{
        printf("1-inserir\n2-remover\n3-imprimir\n4-ordenar\n5-sair\n");
        scanf("%d", &x);

        switch(x){
            case 1:
                printf("Digite o valor a ser inserido: \n");
                scanf("%d", &valor);
                inserir(valor);
                break;
            case 2:
                printf("Digite a posicao a ser removida: \n");
                scanf("%d", &r_valor);
                remover(r_valor);
                break;
            case 3:
                imprimir();
                break;
            case 4:
                ordenar();
        }
    }while(x!=5);

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
/*
valores de teste

1
9

1
2

1
5

1
19

*/