#include<bits/stdc++.h>

int elementos(int[4][4]), l, c;

int main(){
    int vetor[4][4], soma;

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            scanf("%d", &vetor[l][c]);
        }
    }
    
    soma = elementos(vetor);
    
    printf("\nA soma dos termos: %d\n", soma);
    return 0;
}
int elementos(int a[4][4]){
    int s=0;

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            s = s + a[l][c];
        }
    }

return s;

}