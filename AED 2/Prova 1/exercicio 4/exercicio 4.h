struct clientes{
    int identificador;
    char nome[30];
    double leitura_atual, leitura_anterior;
};

clientes* dados_clientes(int ident, char name[], double atual, double anterior);
