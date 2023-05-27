#include <bits/stdc++.h>
using namespace std;

///========================================================================================

// Definição do tipo Aluno como um pair de pair
typedef pair<int, pair<string, float>> Aluno;

///========================================================================================

// Função de comparação para ordenação dos alunos pela média de notas
bool compareAluno(const Aluno& aluno1, const Aluno& aluno2) {
    return aluno1.second.second > aluno2.second.second;
}

///========================================================================================

int main() {
    // Criação do vetor de pares de pares
    vector<Aluno> alunos;
    string nome;
    int qtdd_alunos = 2;
    double nota_1, nota_2, media;

    for(int id=1; id<=qtdd_alunos; id++){
        cout << "Nome do aluno: " << endl;
        cin >> nome;
        cout << "Primeira nota: " << endl;
        cin >> nota_1;
        cout << "Segunda nota: " << endl;
        cin >> nota_2;

        media = (nota_1 + nota_2) / 2;

        alunos.push_back(make_pair(id, make_pair(nome, media)));
    }
    // Ordenação do vetor pela média de notas em ordem decrescente
    sort(alunos.begin(), alunos.end(), compareAluno);

    // Impressão das informações dos alunos na tela
    vector<Aluno>::iterator it;
    for (it = alunos.begin(); it != alunos.end(); ++it) {
        cout << "Matricula: " << it->first << endl;
        cout << "Nome: " << it->second.first << endl;
        cout << "Media de notas: " << it->second.second << endl;
        cout << "---------------------" << endl;
    }

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

///========================================================================================
