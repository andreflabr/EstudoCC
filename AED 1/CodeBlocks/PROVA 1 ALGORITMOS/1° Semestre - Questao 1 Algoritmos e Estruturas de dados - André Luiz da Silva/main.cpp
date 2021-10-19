#include<bits/stdc++.h>
int main(){
    int x[3], i=0, valFinal=0;

    for(i=0; i<3; i++){                                 /// REPETIÇAO PARA LEITURA NO VETOR
        scanf("%d", &x[i]);
    }
    valFinal = ((x[0] * 100) +x[1] + x[2]) % 5;         /// CONTA


    if(valFinal==0){                                    /// TESTES DE CONDICOES DE ACORDO COM A TABELA!!!!!!!!!
        printf("%d - Timido\n", valFinal);              /// NAO FIZ COMO NO VALOR DE SAIDA, QUE SERIA O VALOR FINAL + 1!!!
    }else if(valFinal==1){
        printf("%d - Sonhador\n", valFinal);
    }else if(valFinal==2){
        printf("%d - Paquerador\n", valFinal);
    }else if(valFinal==3){
        printf("%d - Atraente\n", valFinal);
    }else if(valFinal==4){
        printf("%d - Irresistivel\n", valFinal);
    }


return 0;
}
