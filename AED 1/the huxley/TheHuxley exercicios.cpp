
                                        ///Matriz de votação 

#include<bits/stdc++.h>
int main(){
    int c=0, l=0, princesas, eleitores;

    scanf("%d%d", &princesas, &eleitores);

    int matriz[princesas][eleitores];   ///declaraçao da matriz

    for(c=0; c<princesas; c++){
        for(l=0; l<eleitores; l++){

            scanf("%d", matriz[c][l]);
        }
    }

    for(c=0; c<princesas; c++){
        for(l=0; l<eleitores; l++){
            printf("%d", matriz[c][l]);

    }
    }








    return 0;
}