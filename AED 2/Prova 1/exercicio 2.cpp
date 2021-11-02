#include<bits/stdc++.h>

void ordena(int x[], int tamanho){
    int i, j;
    int aux;
    
    printf("Antes: ");
    for(i=0; i<6; i++){
        printf("%d ", x[i]);
    }
    printf("\n");
////////////////////////////////////////////////////////
    for (i=1; i<tamanho; i++){
        aux=x[i];
        j=i-1;
        while((j>=0) && (aux<x[j])){
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = aux;
    }
////////////////////////////////////////////////////////
    printf("Depois: ");
    for(i=0; i<6; i++){
        printf("%d ", x[i]);
    }
    printf("\n");
}

int main(){
    int n[6] = {5, 4, 10, 1, 6, 2};

    ordena(n, 6);
return 0;
}