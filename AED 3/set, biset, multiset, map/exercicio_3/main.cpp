#include <bits/stdc++.h>

using namespace std;

void insert_familia(map<string, vector<string>>&familia_map) {
    string sobrenome;
    cout << "Digite o sobrenome da familia: ";
    cin >> sobrenome;

    int num_crianca;
    cout << "Digite o numero de criancas: ";
    cin >> num_crianca;

    vector<string> crianca_nome;
    for (int i = 0; i < num_crianca; i++) {
        string nome;
        cout << "Digite o nome da crianca " << i + 1 << ": ";
        cin >> nome;
        crianca_nome.push_back(nome);
    }

    familia_map[sobrenome] = crianca_nome;

    cout << "Familia inserida com sucesso!" << endl;
}

void procurar_familia(const map<string, vector<string>>&familia_map) {
    string sobrenome;
    cout << "Digite o sobrenome da familia: ";
    cin >> sobrenome;

    auto it = familia_map.find(sobrenome);
    if (it != familia_map.end()) {
        const vector<string>&crianca_nome = it->second;
        cout << "Filhos da familia " << sobrenome << ":" << endl;
        for (const string &name : crianca_nome) {
            cout << name << endl;
        }
    } else {
        cout << "Familia nao encontrada." << endl;
    }
}

void lista_familia(const map<string, vector<string>>&familia_map) {
    cout << "Todas as familias e seus filhos:" << endl;
    for (const auto& pair : familia_map) {
        string sobrenome = pair.first;
        const vector<string>&crianca_nome = pair.second;
        cout << "Familia " << sobrenome << ":";
        for (const string &name : crianca_nome) {
            cout << " " << name;
        }
        cout << endl;
    }
}

int main() {
    map<string, vector<string>> familia;
    int escolha;

    do {
        cout << "Menu:" << endl;
        cout << "1- Inserir familia" << endl;
        cout << "2- Consultar familia" << endl;
        cout << "3- Listar todas as familias" << endl;
        cout << "4- Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                insert_familia(familia);
                break;
            case 2:
                procurar_familia(familia);
                break;
            case 3:
                lista_familia(familia);
                break;
            case 4:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (escolha != 4);

    return 0;
}

/*  teste

1
silva
2
andre
erica
3


*/
