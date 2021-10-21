#include<bits/stdc++.h>

void calculadora(int *x, int *y, int *z, int *r){
    if(*z == 1){
        *r = *x + *y;
    } else if(*z == 2){
        *r = *x - *y;
    } else if(*z == 3){
        *r = *x / *y;
    } else if(*z == 4){
        *r = *x * *y;
    }
}
int main(){
    int a, b, c, resultado;

    printf("Adicao - digite 1\nSubtracao - digite 2\nDivisao - digite 3\nmultiplicacao - digite 4\n");
    scanf("%d", &c);    
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    calculadora(&a, &b, &c, &resultado);

    printf("\n====== Resultado = %d ======\n", resultado);

    return 0;
}