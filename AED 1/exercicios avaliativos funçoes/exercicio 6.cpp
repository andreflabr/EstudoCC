#include<bits/stdc++.h>

void funcao(void);

int main(){
    funcao();
    return 0;

}
void funcao(void){
    int v[5], vMenor, vMaior, i, menor= 99999, maior=-9999;
    
    for(i=0; i<5; i++){
        scanf("%d", &v[i]);
        if(v[i] < menor){
            vMenor = v[i];
            menor= v[i];
        }
        if(v[i] > maior){
            vMaior = v[i];
            maior= v[i];
        }
    }
    printf("Maior = %d\n", vMaior);
    printf("Menor = %d\n", vMenor);
    }