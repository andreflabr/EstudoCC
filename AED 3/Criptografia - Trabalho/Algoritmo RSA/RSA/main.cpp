//https://www.geeksforgeeks.org/stdgcd-c-inbuilt-function-finding-gcd/

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cctype>
using namespace std;
///============================================================================================================

char palavra[50];  //variavel global


///============================================================================================================
void encriptando(int n, int z, int e, int d){



}


///============================================================================================================
int palavra_numerica(void/*int n, int z, int e, int d*/){
    char palavra_c[50];
    int i=0, j=0, palavra_cifrada[50], tam_palavra=0;

    //cout << palavra << endl;
    tam_palavra = strlen(palavra);

    while(palavra[i] != '\0'){
        palavra_c[i] = toupper(palavra[i]);
        i++;
    }
    //cout << palavra_c << endl;

    for(i=0; i<tam_palavra; i++){
           switch(palavra_c[i]){
                case 'A':
                    palavra_cifrada[i] = 1;
                    break;

                case 'B':
                    palavra_cifrada[i] = 2;
                    break;

                case 'C':
                    palavra_cifrada[i] = 3;
                    break;

                case 'D':
                    palavra_cifrada[i] = 4;
                    break;

                case 'E':
                    palavra_cifrada[i] = 5;
                    break;

                case 'F':
                    palavra_cifrada[i] = 6;
                    break;

                case 'G':
                    palavra_cifrada[i] = 7;
                    break;

                case 'H':
                    palavra_cifrada[i] = 8;
                    break;

                case 'I':
                    palavra_cifrada[i] = 9;
                    break;

                case 'J':
                    palavra_cifrada[i] = 10;
                    break;

                case 'K':
                    palavra_cifrada[i] = 11;
                    break;

                case 'L':
                    palavra_cifrada[i] = 12;
                    break;

                case 'M':
                    palavra_cifrada[i] = 13;
                    break;

                case 'N':
                    palavra_cifrada[i] = 14;
                    break;

                case 'O':
                    palavra_cifrada[i] = 15;
                    break;

                case 'P':
                    palavra_cifrada[i] = 16;
                    break;

                case 'Q':
                    palavra_cifrada[i] = 17;
                    break;

                case 'R':
                    palavra_cifrada[i] = 18;
                    break;

                case 'S':
                    palavra_cifrada[i] = 19;
                    break;

                case 'T':
                    palavra_cifrada[i] = 20;
                    break;

                case 'U':
                    palavra_cifrada[i] = 21;
                    break;

                case 'V':
                    palavra_cifrada[i] = 22;
                    break;

                case 'W':
                    palavra_cifrada[i] = 23;
                    break;

                case 'X':
                    palavra_cifrada[i] = 24;
                    break;

                case 'Y':
                    palavra_cifrada[i] = 25;
                    break;

                case 'Z':
                    palavra_cifrada[i] = 26;
                    break;
        }
    }
    //printar a palavra numerica
    for(j=0; j<tam_palavra; j++){
        cout << palavra_cifrada[j];
    }
}
///============================================================================================================
int calcule_n_z_e_d(int p, int q){
    int n, z, e, d;

    n = p * q;
    z = (p-1)*(q-1);

    cout << "N= " << n << endl;
    cout << "Z= " << z << endl;

    if(z <= 0){
        cout << "Erro: z <= 0!" << endl;
    }
    else{
        for(e = 2; e < z; e++){
            if (__gcd(e, z) == 1){ //gcd maior divisor comum retorna 0 se M e N forem 0
              break;  //para, quando o valor de E seja um divisor comum de Z sendo primos entre si
            }
        }
        for(d = e+1; d<1200; d++){
            if(((e*d) % z) == 1){
                cout << "D= " << d << endl;
                break;
            }
        }
    }

    palavra_numerica();
    encriptando(n, z, e, d);
}

///============================================================================================================
//funçao pra retornar verdadeiro ou falso quando for primo ou nao
bool primo(int x){
    if(x <= 1){
        return false; //falso primo
    }
    for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0){
                return false; //falso primo
            }
        }
        return true; //eh primo
}
///============================================================================================================
//testa de o que a função primo retornau é verdadeiro ou falso
bool teste_primo(int P, int Q){
    bool b_p, b_q;

    b_p = primo(P);
    b_q = primo(Q);

    if((b_p & b_q) == true){
        cout << "\nOs valores digitados sao primos!" << endl;
        return true;
    }
    else {
        if(b_p == false){
        cout << "----O valor de P = " << P << " nao eh primo----" << endl;
        }
        if(b_q == false){
        cout << "----O valor de Q = " << Q << " nao eh primo----" << endl;
        }
        return false;
    }
}
///============================================================================================================
int main(){
    int p, q;
    bool primo_p_q = false;

    cout << "Digite a palavra que voce quer criptografar: ";
    cin >> palavra;

    //cout << palavra << endl;

    //usuario digitar os valores primos quando eles sao falsos
    while(primo_p_q != true){
        cout << "Digite valores primos para P e Q:" << endl;
        cin >> p >> q;
        primo_p_q = teste_primo(p, q);
    }

    calcule_n_z_e_d(p, q);

    return 0;
}
