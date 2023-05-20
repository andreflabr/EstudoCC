#include <bits/stdc++.h>
using namespace std;

vector< pair< pair<double, string>, int > > aluno;
int qtdd_alunos=2;

int main(){
    int id=0;
    string nome;
    double nota_1, nota_2, media;

        for(id=1; id<=qtdd_alunos; id++){
            cout << "Nome do aluno: " << endl;
            cin >> nome;
            cout << "Primeira nota: " << endl;
            cin >> nota_1;
            cout << "Segunda nota: " << endl;
            cin >> nota_2;

            media = (nota_1 + nota_2) /2;

            aluno.push_back(make_pair(make_pair(-media, nome), id));
        }
    sort(aluno.begin(), aluno.end());

    for(int id=0; id<qtdd_alunos; id++){
        printf("%lf ", aluno[id].second);
    }

    printf("\n");

    return 0;
}
/*
valores teste
andre
9.0
10.0
carlos
7.5
8.0

*/


