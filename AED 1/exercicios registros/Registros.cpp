#include <bits/stdc++.h>

using namespace std;


struct cliente {
    char identificador[300];
    char endereco[300];
    char email[300];
    int consumoAgua;
};



int main(){
    int i, qtd = 0;
    double taxa=0;
    struct cliente c[2];
    
    
    printf("Informe a quantidade de clientes:\n");
    scanf("%i",&qtd);

    for(i=0;i<qtd;i++){
    printf("Identificador do Cliente: \n");
    scanf(" %[^\n]", c[i].identificador);

    printf("Endereco do cliente: \n");
    scanf(" %[^\n]", c[i].endereco);
  
    printf("E-mail do cliente: \n");
    scanf(" %[^\n]", c[i].email);
   
    printf("Consumo de agua: \n");
    scanf("%i",&c[i].consumoAgua);
    
    }

    printf("-----Relatorio------\n\n");
  

    for(i=0;i<qtd;i++){
    int m = c[i].consumoAgua;
   
    if(m > 0 && m < 5) taxa = 1.34;
    if(m > 6 && m < 10) taxa = 3.4;
    if(m > 9 && m < 15) taxa = 6.94;
    if(m > 15) taxa = 10.5;
    
    
    printf("Identificador do Cliente:  %s \n", c[i].identificador);
    printf("Endereco do cliente:%s \n", c[i].endereco);
    printf("E-mail do cliente: %s \n", c[i].email);
    printf("Consumo de agua: %d \n", c[i].consumoAgua);
    printf("Valor total para pagar: %.2lf\n", (c[i].consumoAgua * taxa) + 15.78);
    }
    return 0;

}