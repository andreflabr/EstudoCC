#include <bits/stdc++.h>
////////////////////////////////////////////////////////////////////////////////////////////////
struct Nodo {
    int num;
    struct Nodo *pProximo;
};
struct Nodo2 {
    int n;
    struct Nodo2 *pProximo2;
};
////////////////////////////////////////////////////////////////////////////////////////////////
struct Nodo *pInicio = NULL;
struct Nodo *pAux;
struct Nodo2 *pAux2;
struct Nodo2 *pInicio2 = NULL;
int vetor[20], tam=0;
////////////////////////////////////////////////////////////////////////////////////////////////
void push(){
    struct Nodo *pNodo = (Nodo *)malloc(sizeof(struct Nodo));
    tam++;
    printf("Digite um numero\n");
    scanf("%d", &pNodo->num);

	pNodo->pProximo = pInicio;
	pInicio = pNodo;
}
////////////////////////////////////////////////////////////////////////////////////////////////
void push_2(int lugar){
    struct Nodo2 *pNodo2 = (Nodo2 *)malloc(sizeof(struct Nodo2));

    pNodo2->n = vetor[lugar];

	pNodo2->pProximo2 = pInicio2;
	pInicio2 = pNodo2;
}
////////////////////////////////////////////////////////////////////////////////////////////////
void imprimir(struct Nodo2 *pNodo2) {
    if(pNodo2 != NULL){
        printf("Numero: %d\n", pNodo2->n);
        
    } else {
        printf("Vazio\n");
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////
int ordenar_pop(){
    struct Nodo *pAux = pInicio;
	if(pInicio == NULL){
		printf("A pilha esta vazia!\n");
	}else {
		pInicio = pAux->pProximo;
        return(pAux->num);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////
void ordenar(int vet[]){
    int i,j, aux;

    for(i=0; i<tam-1; i++){
        for(j=1; j<tam-i; j++){
            if(vet[j]<vet[j-1]){
                aux=vet[j];
                vet[j]=vet[j-1];
                vet[j-1]=aux;
            }   
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
        
    push();
    push();
    push();

    for(int i=0; i<tam; i++){
        vetor[i] = ordenar_pop();
    }    

    ordenar(vetor);

    push_2(0);
    push_2(1);
    push_2(2);

    //imprimindo o topo depois de ordenar
    imprimir(pInicio2);

}
////////////////////////////////////////////////////////////////////////////////////////////////