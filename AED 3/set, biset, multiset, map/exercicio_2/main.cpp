#include <bits/stdc++.h>

using namespace std;
///============================================================================================
/// LETRA A
///============================================================================================
int contador_teste(const bitset<6> sequencia, const bitset<32> frase_sequencia){
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
///============================================================================================
/// LETRA B
///============================================================================================
void concatenacao() {
    string teste = "100110";
    string frase = "11000100110001101100100110";
    string sequencia_concatenada;

    // Concatenando a sequência padrão até o tamanho da sequência longa
    while (sequencia_concatenada.size() < frase.size()) {
        sequencia_concatenada += teste;
    }

    // Convertendo as sequências para bitsets
    bitset<32> bitset_teste(sequencia_concatenada);
    bitset<32> bitset_frase(frase);

    // Operação "e" (AND)
    bitset<32> resultAnd = bitset_teste & bitset_frase;

    // Operação "ou" (OR)
    bitset<32> resultOr = bitset_teste | bitset_frase;

    // Operação "xor" (XOR)
    bitset<32> resultXor = bitset_teste ^ bitset_frase;

    cout << "Operacao(AND): " << resultAnd.to_string() << endl;
    cout << "Operacao(OR): " << resultOr.to_string() << endl;
    cout << "Operacao(XOR): " << resultXor.to_string() << endl;
}
///============================================================================================
int main(){
    bitset<6> teste("100110");
    bitset<32> frase("11000100110001101100100110");

    int contador = contador_teste(teste, frase);

    cout << "Numero de sequencias: " << contador << endl;

    concatenacao();

    return 0;
}
///============================================================================================



