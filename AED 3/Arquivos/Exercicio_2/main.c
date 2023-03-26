#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name_arquivo_1[50], name_arquivo_2[50], str, str_aux;
    FILE *fp_1, *fp_2;

    printf("Digite o nome do arquivo: (sem .extensao)\n");
    gets(name_arquivo_1);

    ///concatenando para nao precisar colocar a extensao do arquivo
    strcat(name_arquivo_1, ".txt");

    fp_1 = fopen(name_arquivo_1, "w+");  //criando arquivo 1

    if(fp_1){
        printf("\nDigite a string a adicionar!\n");
        while(str != '\n' ){
            scanf("%c", &str);
            fputc(str, fp_1);
        }

///=================== copiando conteudo para outro arquivo ========================

        rewind(fp_1); //colocando o ponteiro no inicio do arquivo

        printf("\nDigite o nome do segundo arquivo: (sem .extensao)\n");
        gets(name_arquivo_2);

        ///concatenando para nao precisar colocar a extensao do arquivo
        strcat(name_arquivo_2, ".txt");

        fp_2 = fopen(name_arquivo_2, "w+"); //criando arquivo 2

        while(!feof(fp_1)){
            str_aux = fgetc(fp_1);
            fputc(str_aux, fp_2);
        }
        printf("\nTexto copiado para o arquivo: %s", name_arquivo_2);
        fclose(fp_1);
        fclose(fp_2);

    }
    else {
        printf("arquivo não pode ser aberto\n");
    }
}
