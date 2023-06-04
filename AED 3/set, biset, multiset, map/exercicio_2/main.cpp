#include <bits/stdc++.h>

using namespace std;


int contador_teste(const bitset<6> &sequencia, const bitset<32> &frase_sequencia) {
    int x = 0;
    int sequencia_tamanho = sequencia.size();
    int frase_sequencia_tamanho = frase_sequencia.size();

    for (int i = 0; i <= frase_sequencia_tamanho; i++) {
        bitset<6> seq(frase_sequencia.to_string().substr(i, sequencia_tamanho));
        if (seq == sequencia) {
            x++;
        }
    }

    return x;
}

int main() {
    bitset<6> teste("100110");
    bitset<32> frase("11000100110001101100100110");

    int contador = contador_teste(teste, frase);

    cout << "Numero de sequencias: " << contador << endl;

    return 0;
}
