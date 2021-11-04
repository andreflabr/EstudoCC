#include<bits/stdc++.h>
#include "matematica.h"

int main(){
    int teste, a, b, x, y, z;
    float c;

    do{
    printf("Digite 1 para potencia, 2 para resto de divisao, 3 para arredondar e 4 para sair \n");
    scanf("%d", &teste);

    switch(teste){
        case 1:
            printf("Digite a base e expoente: \n");
            scanf("%d%d", &a, &b);
            x=potencia(a,b);
            printf("Resultado: %d\n", x);
            break;
        case 2:
            printf("Digite o valor e o divisor: \n");
            scanf("%d%d", &a, &b);
            y=resto(a,b);
            printf("Resultado: %d\n", y);
            break;
        case 3:
            printf("Digite o valor a ser arredondado: \n");
            scanf("%f", &c);
            z=arredonda(c);
            printf("Resultado: %d\n", z);
            break;
    }
    }while(teste!=4);

    return 0;
}
