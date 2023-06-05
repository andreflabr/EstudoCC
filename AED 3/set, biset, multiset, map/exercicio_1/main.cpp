#include <bits/stdc++.h>

using namespace std;
///============================================================================================
int main() {
    vector<int> A = {5, 2, 3, 3, 5, 0, 0, 0, 1, 2};
    vector<int> B = {4, 4, 1, 1, 0, 3, 1, 1, 0, 6};
    vector<int>::iterator it;
    set<int> numeros_comuns;

    // Percorre o vetor A e insere os n�meros no conjunto
    for (it = A.begin(); it != A.end(); ++it) {
        numeros_comuns.insert(*it);
    }

    // Percorre o vetor B e verifica se cada n�mero est� no conjunto
    // Se estiver, imprime o n�mero e o remove do conjunto
    for (it = B.begin(); it != B.end(); ++it) {
        if (numeros_comuns.count(*it) > 0) {
            cout << *it << " ";
            numeros_comuns.erase(*it);
        }
    }

    return 0;
}
///============================================================================================
