#include<bits/stdc++.h>
int main(){
    double matriz[4][3], vetor[12];
    int l, c, i=0;

    for(l=0; l<4; l++){
        for(c=0; c<3; c++){
            scanf("%lf", &matriz[l][c]);
        }
    }


    do{
        for(l=0; l<4; l++){
            for(c=0; c<3; c++){
                vetor[i] = matriz[l][c];
                printf("Vetor[%d] = %.1lf\n", i, vetor[i]);
                i++;
            }
        }
    
    }while(i<12);

    return 0;
}