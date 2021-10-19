#include<bits/stdc++.h>

void final(int, double);

int main(){
    int vendas;
    double salario;

    printf("Qual o total de vendas? \n");
    scanf("%d", &vendas);

    printf("Salario fixo? \n");
    scanf("%lf", &salario);
    
    final(vendas, salario);
    return 0;
}

void final(int x,double y){
    double resultado;
    resultado = (x*0.15)+y;
    printf("\nSalario final: %.2lf\n", resultado);
}
