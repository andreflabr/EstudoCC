




/// Não consegui finalizar





#include <bits/stdc++.h>
using namespace std;

struct Cliente {
    int identificador;
    int posicao;
    string nome;
    int idade;
    char deficiente;

    bool operator <(const Cliente& x) const {
        if (deficiente == 's' && x.deficiente == 'n') {
            return true;
        } else if (deficiente == 'n' && x.deficiente == 's') {
            return false;
        } else if (idade >= 60 && x.idade < 60) {
            return true;
        } else if (idade < 60 && x.idade >= 60) {
            return false;
        } else {
            return posicao > x.posicao;
        }
    }
};

int main() {
    priority_queue<Cliente> filaPrioridade;

    // Inserir os clientes teste na fila
    filaPrioridade.push({281, 1, "Anderson", 45, 'n'});
    filaPrioridade.push({175, 2, "Joana", 19, 'n'});
    filaPrioridade.push({143, 3, "Joao", 62, 'n'});
    filaPrioridade.push({346, 4, "Maria", 31, 's'});
    filaPrioridade.push({027, 5, "Joaquim", 65, 'n'});
    filaPrioridade.push({089, 6, "Valerio", 61, 's'});

    // Imprimir a ordem de atendimento
    int contador = 1;
    while (!filaPrioridade.empty()) {
        Cliente cliente = filaPrioridade.top();
        filaPrioridade.pop();
        cout << contador << "- " << cliente.identificador << " " << cliente.posicao << " "
             << cliente.nome << " " << cliente.idade << " " << cliente.deficiente << endl;
        contador++;

        // Fazer a análise a cada 3 clientes
        if (contador == 3) {
            priority_queue<Cliente> novaFilaPrioridade;
            while (!filaPrioridade.empty()) {
                novaFilaPrioridade.push(filaPrioridade.top());
                filaPrioridade.pop();
            }
            filaPrioridade = novaFilaPrioridade;
            contador = 1;
        }
    }

    return 0;
}




