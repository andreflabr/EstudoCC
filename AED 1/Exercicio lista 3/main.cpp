                                        ///exercicio 1059
/*
#include<bits/stdc++.h>

int main(){

    int I,x=0;

    for(I=1; I<=100; I++){
        x = x + 1;
        if(x%2==0){
            printf("%d\n", x);
        }
    }

    return 0;
}
*/
                                        ///exercicio 1064
/*
#include<bits/stdc++.h>
int main(){
    int I, contador=0;
    double teste, media, acumulador=0;


        for(I=0; I<6; I++){

        scanf("%lf", &teste);
        if(teste >= 0){
                contador = contador + 1;
                acumulador = acumulador + teste;
        }
        }

        media = acumulador/contador;
        printf("%d valores positivos\n", contador);
        printf("%.1lf\n", media);

return 0;
}
*/
                                        ///exercicio 1072
/*
#include<bits/stdc++.h>
int main(){
    int n, x, I, digitado, acumulador=0, acumulador_2=0;

    scanf("%d", &n);

    for(I=0;I<n; I++){
        scanf("%d", &digitado);
        if(digitado>=10 && digitado<=20){
            acumulador = acumulador + 1;
        } else
        acumulador_2 = acumulador_2 + 1;
    }
    printf("%d in\n", acumulador);
    printf("%d out\n", acumulador_2);



return 0;
}
*/
                                        ///exercicio 1116
/*
#include<bits/stdc++.h>
int main(){
    int I, n, x, y ;
    double divisao;

    scanf("%d", &n);

    for(I=1; I<=n; I++){
            scanf("%d%d", &x, &y);

            if(y==0){
                printf("divisao impossivel\n");
            }else{
                divisao = (double)x/(double)y;
                printf("%.1lf\n", divisao);
            }
    }
return 0;
}
*/
                                        ///exercicio 1132
/*
#include<bits/stdc++.h>
int main(){
    int x, y, I, soma=0, inversor=0;

    scanf("%d%d", &x, &y);
    if(x>y){
            inversor = y;
            y = x;
            x = inversor;
    }

    for(I=x; I<=y; I++){

    if(I % 13 != 0){
        soma = soma + I;
    }

    }
    printf("%d\n", soma);


return 0;
}
*/
                                        ///exercicio 1165
/*
#include<bits/stdc++.h>
int main(){
    int I, ii, n, x, divisor=0;

    scanf("%d", &n);

    for(I=0 ; I<n ; I++){
            scanf("%d", &x);


            for(ii=1; ii<=x; ii++){
            if(x%ii==0){
                divisor++;
            }
            }

            if(divisor==2){
                printf("%d eh primo\n", x);
            }
            else if(divisor!=2){
                printf("%d nao eh primo\n", x);
            }
            divisor=0;


    }
return 0;
}



