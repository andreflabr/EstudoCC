#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<string> pessoas_queue;
    stack<string> pessoas_pilha;
    string pessoa_inserir;
    const int qtdd = 7;
    int i=1, j=1, k=1;

    while(i <= qtdd){
        cout << "Escreva o nome da pessoa " << "(posicao: " << i << "):\t";
        cin >> pessoa_inserir;
        pessoas_queue.push(pessoa_inserir);
        cout << "primeiro da fila: " << pessoas_queue.front() << endl;
        i++;
    }

    while(j <= qtdd){
        pessoas_pilha.push(pessoas_queue.front());
        pessoas_queue.pop();
        j++;
    }

    while(k <= qtdd){
        cout << "Topo da pilha: " << pessoas_pilha.top()<< "\t (dropando)"<< endl;
        pessoas_pilha.pop();
        k++;
    }

    return 0;

}
/* teste
andre
luiz
carlos
joana
anna
beatriz
joao

*/
