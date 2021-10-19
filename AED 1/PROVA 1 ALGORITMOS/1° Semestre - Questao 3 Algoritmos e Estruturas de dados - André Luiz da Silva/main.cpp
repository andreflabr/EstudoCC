#include<bits/stdc++.h>
int main(){
    int x[8], i=0, ii=0, maior=-999, y[8];


    for(i=0 ; i<8 ; i++){                           ///repetiçao para a leitura no vetor com teste de condiçao
        scanf("%d", &x[i]);

        if(x[i] >= maior){
            maior = x[i];
        }
        }
        printf("%d\n", maior);
        i=0;                                        ///zerei para usar de novo no segundo for


    for(ii=0 ; ii<8 ; ii++){                        ///repetiçao para multiplicar e mostrar resultados na tela
            y[ii] = maior * x[i];
            i++;
            printf("%d ", y[ii]);
        }



return 0;
}

