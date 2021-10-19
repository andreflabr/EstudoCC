#include<bits/stdc++.h>

void BubbleSort(int vet[], int tam){
    int i,j, aux;

    for(i=0; i<tam-1; i++){
        for(j=1; j<tam-i; j++){
            if(vet[j]<vet[j-1]){
                aux=vet[j];
                vet[j]=vet[j-1];
                vet[j-1]=aux;
            }   
        }
        printf("vetor[%d]=%d  e  vetor[%d]=%d\n", j-1, vet[j-1], j, vet[j]);
    }
    for(i=0; i<tam; i++){
        printf("vetor[%d]=%d\n", i, vet[i]);
    }
}

int main(){
    int i, tamanho=6, car[6]={1,6,4,2,3,5};

    BubbleSort(car, tamanho);

    return 0;
}