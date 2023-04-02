#include<stdio.h>
#include<stdlib.h>
#include<string.h>
///==================================================================================================================================
typedef struct{
     int matricula;
     char nome[30], endereco[50], curso[15];
}Alunos;
///==================================================================================================================================
void cadastrar(char name_arq[]){
    Alunos a;
    FILE *file = fopen(name_arq, "ab");   //ab é de anexação

    if(file){
        printf("\n\tDigite matricula: ");
        scanf("%d", &a.matricula);

        printf("\n\tnome: ");
        scanf("%s", a.nome);

        printf("\n\tendereco: ");
        scanf("%s", a.endereco);

        printf("\n\tcurso: ");
        scanf("%s", a.curso);

        fwrite(&a, sizeof(Alunos), 1, file); ///o endereco da variavel, o tamanho, a quantidade a escrever, e o arquivo
        fclose(file);
    }
    else{
        printf("\nErro ao abrir arquivo\n");
    }
}
///==================================================================================================================================
void listar_todos(char name_arq_ler[]){
    Alunos a;
    FILE *file = fopen(name_arq_ler, "rb"); //rb de ler em binario

    if(file){
        while(!feof(file)){
            if(fread(&a, sizeof(Alunos), 1, file)){ //teste para printar, se for 0 ele nao imprime, evita repetir a ultima impressao
                printf("\nName: %s; matricula: %d; endereco: %s; curso: %s", a.nome, a.matricula, a.endereco, a.curso);
            }
        }
        fclose(file);
        printf("\n");
    }
    else{
        printf("\nErro ao abrir arquivo para leitura\n");
    }
}
///==================================================================================================================================
void remover(char name_arq_rem[]){

    //ideia é criar um arquivo auxiliar para remover, apagando o original e recriando sem o elemento

    Alunos a;
    char aux[] = {"aux"};
    int matricula_remover;
    FILE *file = fopen(name_arq_rem, "rb"); //leitura binaria   rb

    //usando arquivo auxiliar para remover
    strcat(aux, name_arq_rem);
    FILE *file_aux = fopen(aux, "ab"); //anexar  ab

    printf("\nDigite a matricula a ser removida: \n");
    scanf("%d", &matricula_remover);

    if(file){
        while(!feof(file)){
            if(fread(&a, sizeof(Alunos), 1, file)){
                if(a.matricula != matricula_remover){
                    fwrite(&a, sizeof(Alunos), 1, file_aux); //salvando em novo arquivo sem o que precisa remover
                    printf("\nName: %s; matricula: %d; endereco: %s; curso: %s", a.nome, a.matricula, a.endereco, a.curso);
                }
                else {
                    printf("\nItem encontrado e removido!\n");
                }
            }
        }
    }
    else {
        printf("\nErro ao abrir arquivo para remover!\n");
    }

    fclose(file);
    fclose(file_aux);

    remove(name_arq_rem); //apaga arquivo original
    rename("auxcadastro.dat", name_arq_rem); //troca o nome do arquivo auxiliar pelo original

}
///==================================================================================================================================
void consultar(char name_arq_consulta[]){
    Alunos a;
    int matricula_consulta;
    FILE *file = fopen(name_arq_consulta, "rb"); //leitura binaria

    printf("\nDigite a matricula a ser consultada: \n");
    scanf("%d", &matricula_consulta);

    if(file){
        while(!feof(file)){
            if(fread(&a, sizeof(Alunos), 1, file)){
                if(a.matricula == matricula_consulta){
                    printf("\nMATRICULA ENCONTRADA --> Name: %s; matricula: %d; endereco: %s; curso: %s\n", a.nome, a.matricula, a.endereco, a.curso);
                }
            }
        }
        fclose(file);
    }
    else {
        printf("\nErro ao abrir arquivo para consultar!\n");
    }
}
///==================================================================================================================================
int main(){
    int entrada;
    char name_arquivo[] = {"cadastro.dat"};

    while(entrada != 0){

        printf("\n\t1 - Cadastrar\n\t2 - remover específico\n\t3 - consultar específico\n\t4 - Listar todos\n\t0 - sair\n\n");
        scanf("%d", &entrada);

        switch(entrada){
        case 1:
            cadastrar(name_arquivo);
            break;

        case 2:
            remover(name_arquivo);
            break;

        case 3:
            consultar(name_arquivo);
            break;

        case 4:
            listar_todos(name_arquivo);
            break;

        case 0:
            printf("\nSaindo...\n");
            break;

        default:
            printf("\nValor Inválido!\n");
        }
    }

    return 0;
}

///==================================================================================================================================

/*valores teste
1
1
andre
formiga
cc
1
2
joao
formiga
cc
1
3
carlos
formiga
cc
4

*/
