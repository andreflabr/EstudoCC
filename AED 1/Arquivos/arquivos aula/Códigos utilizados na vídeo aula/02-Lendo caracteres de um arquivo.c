/*
Programa que efetua leitura do arquivo criado e mostra na tela.
*/

#include<stdio.h>

main(){
    FILE *p;
    char carac;
    p=fopen("arq1.dat","r");
    if(p==NULL)
        printf("\nErro na abertura");
    else{
        while(!feof(p)){
            carac=fgetc(p);
            if(ferror(p))
                printf("\nErro na leitura do caractere");
            else{
                printf("\nLeitura realizada com sucesso");
                printf("\nCaracter lido %c",carac);
            }
        }
    }
    getch();
    fclose(p);
}
