#include<bits/stdc++.h>

int vetor(int, int[]);

/////////////////////////////////////////////////////////////////////////////////

int main(){
    int tamanho, result=0, i=0;

    printf("Quantos numeros serao digitados? \n");
    scanf("%d", &tamanho);
    int x[tamanho];

    for(i=0; i<tamanho; i++){
        scanf("%d", &x[i]);  
    }

    result = vetor(tamanho, x);
    printf("\nO maior numero eh: %d\n", result);

return 0;
}

/////////////////////////////////////////////////////////////////////////////////

int vetor(int t, int x[]){
    int maior; 

    if(t==1){
        return x[0];
    }else{
        maior = vetor(t-1, x); 
        if(maior < x[t-1]){
            maior = x[t-1];
        }             
    }

return maior;
}