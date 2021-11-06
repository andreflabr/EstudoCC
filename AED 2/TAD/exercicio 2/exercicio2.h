struct Aluno{
    int m;
    double notas[3];
};
Aluno* aluno(int matricula, double nota_1, double nota_2, double nota_3);
int matricula(Aluno *x);
double nota_1(Aluno *x);
double nota_2(Aluno *x);
double nota_3(Aluno *x);
double media(Aluno *x);
char* situacao(Aluno *x);
void libera(Aluno *x);
