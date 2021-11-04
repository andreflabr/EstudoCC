struct Aluno{
    int matr;
    double notas[3];
};

Aluno* cria_aluno(int matricula, double nota1, double nota2, double nota3);

int obter_matricula(Aluno *a);

double obter_nota1(Aluno *a);
double obter_nota2(Aluno *a);
double obter_nota3(Aluno *a);
double obter_media(Aluno *a);
char* situacao(Aluno *a);
void libera(Aluno *a);
