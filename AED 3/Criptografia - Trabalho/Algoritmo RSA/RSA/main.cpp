//https://www.geeksforgeeks.org/stdgcd-c-inbuilt-function-finding-gcd/
#include<iostream>
#include<bits/stdc++.h>
//#include<stdint.h>
//#include<math.h> //pra usar o sqrt estao na bits/stcd++.h
//#include<numeric> //biblioteca pra usar o __gcd estao na bits/stcd++.h
using namespace std;

///============================================================================================================
void calculo_cifrar_decifrar(int *E, int *D, int *N, int *palavra_numerada, int *tam_palavra){
    long long int j=0, cifrada[50], m[50]; //m elevado a E
    //__int64 c_d[50], decifrada[50]; //cifrada elevado a d

/// criptando ---------------------------------------------------------------
/// for m^E

    for(j=0; j<(*tam_palavra); j++){
        m[j] = pow(palavra_numerada[j], *E);
        cifrada[j] = m[j] % (*N);
    }

    cout << "\nPalavra crifrada: " << endl;
    for(j=0; j<(*tam_palavra); j++){
        cout << "\t" << cifrada[j]; //palavra cifrada guardada no vetor C
    }
    cout << endl;

/*
/// decriptando ---------------------------------------------------------------
/// c^d -> m =c^d mod n

    for(j=0; j<(*tam_palavra); j++){
        //cout << "----teste for----"<< endl;
        c_d[j] = pow(cifrada[j], (*D));
        cout << c_d[j] << " -> numero cifado elevado a d no long long int";
        decifrada[j] = c_d[j] % (*N);

    }
    cout << "\nPalavra decrifrada: " << endl;
    for(j=0; j<(*tam_palavra); j++){
        cout << "\t" << decifrada[j]; //palavra cifrada guardada no vetor C
    }
*/
}
///============================================================================================================
void palavra_numerica(int *N, int *Z, int *E, int *D, char *palavra, int *palavra_numerada, int *tam_palavra){
    char palavra_maiuscula[50];
    int i=0;

    while(palavra[i] != '\0'){
        palavra_maiuscula[i] = toupper(palavra[i]);
        i++;
    }

    for(i=0; i<(*tam_palavra); i++){
           switch(palavra_maiuscula[i]){
                case 'A':
                    palavra_numerada[i] = 1;
                    break;

                case 'B':
                    palavra_numerada[i] = 2;
                    break;

                case 'C':
                    palavra_numerada[i] = 3;
                    break;

                case 'D':
                    palavra_numerada[i] = 4;
                    break;

                case 'E':
                    palavra_numerada[i] = 5;
                    break;

                case 'F':
                    palavra_numerada[i] = 6;
                    break;

                case 'G':
                    palavra_numerada[i] = 7;
                    break;

                case 'H':
                    palavra_numerada[i] = 8;
                    break;

                case 'I':
                    palavra_numerada[i] = 9;
                    break;

                case 'J':
                    palavra_numerada[i] = 10;
                    break;

                case 'K':
                    palavra_numerada[i] = 11;
                    break;

                case 'L':
                    palavra_numerada[i] = 12;
                    break;

                case 'M':
                    palavra_numerada[i] = 13;
                    break;

                case 'N':
                    palavra_numerada[i] = 14;
                    break;

                case 'O':
                    palavra_numerada[i] = 15;
                    break;

                case 'P':
                    palavra_numerada[i] = 16;
                    break;

                case 'Q':
                    palavra_numerada[i] = 17;
                    break;

                case 'R':
                    palavra_numerada[i] = 18;
                    break;

                case 'S':
                    palavra_numerada[i] = 19;
                    break;

                case 'T':
                    palavra_numerada[i] = 20;
                    break;

                case 'U':
                    palavra_numerada[i] = 21;
                    break;

                case 'V':
                    palavra_numerada[i] = 22;
                    break;

                case 'W':
                    palavra_numerada[i] = 23;
                    break;

                case 'X':
                    palavra_numerada[i] = 24;
                    break;

                case 'Y':
                    palavra_numerada[i] = 25;
                    break;

                case 'Z':
                    palavra_numerada[i] = 26;
                    break;
        }
    }

}
///============================================================================================================
int calcule_n(int *P, int *Q){
    ///n = pq
    int n=0;
    n = (*P) * (*Q);

    return n;
}
///============================================================================================================
int calcule_z(int *P, int *Q){
    ///(p-1)(q-1)
    int z=0;
    z = ((*P)-1)*((*Q)-1);

    return z;
}
///============================================================================================================
int calcule_e(int *Z, int *N){ ///arrumar essa função, esta errada o valor de E
    int e;

    ///E nao pode ser igual a D
    ///E nao possua fator comum com z (E e Z sao primos)

        for((e = 2); (e < (*N)); e++){
            if(__gcd(e, (*Z)) == 1){ //gcd maior divisor comum
              //cout << e << " e" <<  endl;
              break;
            }
        }

    return e;
}
///============================================================================================================
int calcule_d(int *E, int *Z){
    ///ed mod z = 1
    int d=0;

        for(d = 0; d < 1200; d++){
            if ((((((*E)*d)-1) % (*Z)) == 0) & ((*E) != d)){
                    break;
                    //cout << d << " d" << endl;
            }
        }

    return d;
}
///============================================================================================================
bool primo(int *x){
//funçao pra retornar verdadeiro ou falso quando for primo ou nao

    if(*x <= 1){
        return false; //falso primo
    }
    for (int i = 2; i <= sqrt(*x); i++) {
            if (*x % i == 0){
                return false; //falso primo
            }
        }

    return true; //eh primo
}
///============================================================================================================
bool teste_primo(int *P, int *Q){
//testa se o que a função primo retornar é verdadeiro ou falso

    bool b_p, b_q;

    //cout << *P << *Q << endl;

    b_p = primo(&(*P));
    b_q = primo(&(*Q));

    if((b_p & b_q) == true){
        return true;
    }
    else {
        if(b_p == false){
        cout << "----O valor de P = " << *P << " nao eh primo----" << endl;
        }
        if(b_q == false){
        cout << "----O valor de Q = " << *Q << " nao eh primo----" << endl;
        }
        return false;
    }
}
///============================================================================================================
int main(){
    int p, q, n, z, d, e, tam_palavra;
    bool primo_p_q = false;
    char palavra[50];
    int palavra_numerada[50];

    cout << "Digite a palavra que voce quer criptografar: ";
    cin >> palavra;

    //tamanho palavra digitada
    tam_palavra = strlen(palavra);

    //usuario digitar os valores primos quando eles sao falsos
    while(primo_p_q != true){
        cout << "Digite valores primos para P e Q:" << endl;
        cin >> p >> q;
        primo_p_q = teste_primo(&p, &q);
    }

    n = calcule_n(&p, &q);
    z = calcule_z(&p, &q);
    e = calcule_e(&z, &n);
    d = calcule_d(&e, &z);

    cout << "N = " << n << "\n" << "Z = " <<  z << "\n" << "E = " <<  e << "\n" << "D = " <<  d << endl;

    ///chama função que substitui letra pela sua posição no alfabeto
    palavra_numerica(&n, &z, &e, &d, palavra, palavra_numerada, &tam_palavra);


    ///printar a palavra numerica
    cout << "\nPalavra substituida pelo seu numeral: "<< endl;
    for(int j=0; j<tam_palavra; j++){
        cout << "\t" << palavra_numerada[j];
    }

    ///função
    calculo_cifrar_decifrar(&e, &d, &n, palavra_numerada, &tam_palavra);

    return 0;
}
