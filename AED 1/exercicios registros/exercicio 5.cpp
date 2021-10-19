                                            ///exercicio 5 

#include<bits/stdc++.h>
struct clientes{
    double consumo, valor;
    char identificador[30], endereco[40], email[40], tarja[20];
};

int main(){
    struct clientes registros;
    int i=0;
    double percentual=0;


        printf("Qual o identificador? \n" );
        scanf(" %[^\n]", &registros.identificador);

        printf("Qual o endereco? \n");
        scanf(" %[^\n]", &registros.endereco);

        printf("Qual o email? \n");
        scanf(" %[^\n]", &registros.email);

        printf("Qual o consumo de agua em metros cubicos? \n");
        scanf("%lf", &registros.consumo);

        if(registros.consumo==0){
            registros.valor = 15.78 + (registros.consumo*0.00);
            strcpy(registros.tarja, "Azul");

        }else if(registros.consumo<=5){
            registros.valor = 15.78 + (registros.consumo*1.34);
            strcpy(registros.tarja, "Verde");

        }else if(registros.consumo<10){
            registros.valor = 15.78 + (registros.consumo*3.40);
            strcpy(registros.tarja, "Amarela");

        }else if(registros.consumo<=15){
            registros.valor = 15.78 + (registros.consumo*6.94);
            strcpy(registros.tarja, "Laranja");

        }else if(registros.consumo>15){
            registros.valor = 15.78 + (registros.consumo*10.50);
            strcpy(registros.tarja, "Vermelha");
            percentual = (10.50 / registros.valor) * 100;

        }

                                       ///relatorio
        printf("\nIdentificador: %s; de endereco: %s; e-mail: %s; Tarja: %s; PAGARA: R$%.2lf\n", registros.identificador, registros.endereco, registros.email, registros.tarja, registros.valor);
                                       
                                       ///relatorio tarja vermelha
        printf("\nTarja VERMELHA: %.1lf %%; Consumo foi de: %.1lf metros cubicos\n", percentual, registros.consumo);


    return 0;
}