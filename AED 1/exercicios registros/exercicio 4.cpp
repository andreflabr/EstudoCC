                                        ///exercicio 4

#include<bits/stdc++.h>
struct clientes{
    double consumo, valor;
    char identificador[30], endereco[40], email[40];
};

int main(){
    struct clientes registros;
    int i=0;

        printf("Qual o identificador? \n" );
        scanf(" %[^\n]", &registros.identificador);

        printf("Qual o endereco? \n");
        scanf(" %[^\n]", &registros.endereco);

        printf("Qual o email? \n");
        scanf(" %[^\n]", &registros.email);

        printf("Qual o consumo de agua em metros cubicos? ");
        scanf("%lf", &registros.consumo);

        if(registros.consumo==0){
            registros.valor = 15.78 + (registros.consumo*0.00);
        }else if(registros.consumo<=5){
            registros.valor = 15.78 + (registros.consumo*1.34);
        }else if(registros.consumo<10){
            registros.valor = 15.78 + (registros.consumo*3.40);
        }else if(registros.consumo<=15){
            registros.valor = 15.78 + (registros.consumo*6.94);
        }else if(registros.consumo>15){
            registros.valor = 15.78 + (registros.consumo*10.50);
        }

                                       ///relatorio
        printf("\nIdentificador: %s; de endereco: %s e de email: %s; PAGARA: R$%.2lf\n", registros.identificador, registros.endereco, registros.email, registros.valor);



    return 0;
}