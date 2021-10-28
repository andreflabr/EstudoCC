#include<bits/stdc++.h>

struct clientes{
    int horas, codigo;
    char email[40];
    double pagamento;
};

int main(){
    struct clientes **c;
    int a, h=0;
    printf("Qual a quantidade de clientes?\n");
    scanf("%d", &a);

    c = (clientes **)malloc(a*sizeof(clientes *));
    for(int i=0; i<a; i++){
        c[i]=(clientes *)malloc(sizeof(clientes));
    }
    for(int j=0; j<a; j++){
        printf("Qual o codigo do cliente?\n");
        scanf(" %d", &c[j]->codigo);
        printf("Qual o email do cliente?\n");
        scanf(" %[^\n]", c[j]->email);
        printf("Quantas horas de acesso do cliente?\n");
        scanf("%d", &c[j]->horas);

        if(c[j]->horas <=20){
            c[j]->pagamento = 35;
        }else {
            h = c[j]->horas - 20;
            c[j]->pagamento = 35 + (h * 2.50);
        }
    }
    for(int i=0; i<a; i++){
        printf("\nO cliente de codigo: %d, pagara: R$%.2lf\n", c[i]->codigo, c[i]->pagamento);
    }

    for(int i=0; i<a; i++){
        free(c[i]);
    }
    free(c);

    return 0;
}