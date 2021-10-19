#include<bits/stdc++.h>

struct programa{
    int ano;
    double valor;
    char modelo[40], proprietario[40], cidade[40], estado[2];
};
int n=500;  ///caso queria fazer teste, mude valor de n para 3 e copie as entradas ao final do codigo e cole no console!

int main(){
    struct programa registros[n];
    int i=0, q=0;

    do{
        scanf("%d", &registros[i].ano);
        scanf("%lf", &registros[i].valor);
        scanf(" %[^\n]", registros[i].modelo);
        scanf(" %[^\n]", registros[i].proprietario);
        scanf(" %[^\n]", registros[i].cidade);
        scanf(" %[^\n]", registros[i].estado);
        
        if(strcmp(registros[i].estado , "MG")==0){
            q++;
        }
        i++;

    }while(i<n);


    printf("\nA quantidade de veiculos cadastrados em MG: %d\n", q);

    
    for(i=0; i<n; i++){
        if(registros[i].ano < 2016){
            printf("\nProprietario: %s", registros[i].proprietario);
            printf("\nAno: %d", registros[i].ano);        
            printf("\nModelo: %s\n", registros[i].modelo);
        }
    }

return 0;
}
/*testes
2015
50.900
ford ka
Juliana
Juruaia
MG

2010
10.000
Corcel
Joao
Guaxupé
MG

2020
60.000
onix
Larissa loira odonto
Aguas de sao pedro
SP
*/