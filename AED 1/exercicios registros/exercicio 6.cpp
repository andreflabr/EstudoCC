                                            ///exercicio 6

#include<bits/stdc++.h>
struct agenda{
    char nome[40], telefone[15];
    int dia, mes;
};

int main(){
    struct agenda registros[40];
    int i=0, cont=0;;

        for(i=0; i<40; i++){
            printf("Nome? \n");
            scanf(" %[^\n]", &registros[i].nome);
            printf("Telefone: \n");
            scanf(" %[^\n]", &registros[i].telefone);
            printf("Dia da consulta? \n");
            scanf("%d", &registros[i].dia);
            printf("Mes da consulta? \n");
            scanf("%d", &registros[i].mes);
        }

    cont=0;        
    for(i=0; i<40; i++){
        if(registros[i].mes == 1){
            cont++;
            if(cont==1){
                printf("\n\n          1-Janeiro\n");                
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 2){
            cont++;
            if(cont==1){
                printf("\n\n          2-Feveriro\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 3){
            cont++;
            if(cont==1){
                printf("\n\n          3-Marco\n");
            }
            
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 4){
            cont++;
            if(cont==1){
                printf("\n\n          4-Abril\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 5){
            cont++;
            if(cont==1){
                printf("\n\n          5-Maio\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 6){
            cont++;
            if(cont==1){
                printf("\n\n          6-Junho\n"); 
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 7){
            cont++;
            if(cont==1){
                printf("\n\n          7-Julho\n"); 
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 8){
            cont++;
            if(cont==1){
                printf("\n\n          8-Agosto\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 9){
            cont++;
            if(cont==1){
                printf("\n\n          9-Setembro\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 10){
            cont++;
            if(cont==1){
                printf("\n\n          10-Outubro\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 11){
            cont++;
            if(cont==1){
                printf("\n\n          11-Novembro\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
    cont=0;
    for(i=0; i<40; i++){
        if(registros[i].mes == 12){
            cont++;
            if(cont==1){
                printf("\n\n          12-dezembro\n");
            }
            printf("\nNome: %s, ", registros[i].nome);
            printf("Dia: %d\n", registros[i].dia);
        }
    }
   
return 0;
}
/*teste de entradas  

nome1
000000
1
1
nome2
0000002
1
2
nome3
0000003
1
3
nome4
0000004
1
4
nome5
0000005
1
5
nome6
0000006
1
6
nome7
0000007
1
7
nome8
0000008
1
8
nome9
0000009
1
9
nome10
0000010
1
10
nome11
0000011
1
11
nome12
0000012
1
12

*/