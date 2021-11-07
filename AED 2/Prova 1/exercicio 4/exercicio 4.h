typedef struct clientes{
    int identificador;
    char nome[30];
    double leitura_atual, leitura_anterior;
}cli;
cli *dados_clientes(int ident, char name[], double atual, double anterior);
void acessar(cli *x);
void liber(cli *x);
void stats(cli *x);
