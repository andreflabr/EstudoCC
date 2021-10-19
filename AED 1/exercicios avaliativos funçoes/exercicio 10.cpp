#include<bits/stdc++.h>

int matriz (int[5][5]);
int l, c;

int main(){
    int menor=0, vetor[5][5];

    for(l=1; l<6; l++){
        for(c=1; c<6; c++){
            scanf("%d", &vetor[l][c]);
        }
    }
    menor = matriz(vetor);

    printf("\nO menor valor da diagonal secundaria eh: %d\n", menor);

    return 0;
}
int matriz (int a[5][5]){
    int m=0, t=999;


    for(l=1; l<6; l++){
        for(c=1; c<6; c++){
            if(l+c == 6){
                if(a[l][c] < t){
                    m = a[l][c];
                    t = a[l][c];
                }
            }
        }
    }

return m;
}