#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name_arquivo_1[30], name_arquivo_2[30], str[100], str_aux[100];
    FILE *fp_1, *fp_2;

    printf("Digite o nome do arquivo: (sem .extensao)\n");
    gets(name_arquivo_1);

    ///concatenando para nao precisar colocar a extensao do arquivo
    strcat(name_arquivo_1, ".txt");

    if((fp_1=fopen(name_arquivo_1, "w"))==NULL){
        printf("arquivo não pode ser aberto\n");
        exit(1);
    }
    do{
        printf("Entre com uma string (ENTER para sair) : \n");
        gets(str);
        strcat(str, "\n");
        fputs(str, fp_1);

///===================trocando arquivos========================

        fgetc(fp_1);   //<----------------------------------------
        printf("%s", str_aux);



        printf("\nDigite o nome do segundo arquivo: (sem .extensao)\n");
        gets(name_arquivo_2);

        ///concatenando para nao precisar colocar a extensao do arquivo
        strcat(name_arquivo_2, ".txt");


    } while(*str != '\n' );


}

