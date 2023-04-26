//https://www.geeksforgeeks.org/stdgcd-c-inbuilt-function-finding-gcd/

#include<iostream>
#include<bits/stdc++.h>
#include<math.h> //pra usar o sqrt
#include<cctype> //biblioteca pra usar o __gcd
using namespace std;

///============================================================================================================
void calculo_cifrar_decifrar(int *E, int *D, int *N, int *palavra_numerada, int *tam_palavra){
    int c=0, m=0;;




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
     int n=0;
     n = (*P) * (*Q);

     return n;
}
///============================================================================================================
int calcule_z(int *P, int *Q){
    int z=0;
    z = ((*P)-1)*((*Q)-1);

    return z;
}
///============================================================================================================
int calcule_e(int *Z){
    int e=0;

    if(*Z <= 0){
        cout << "Erro: z <= 0!" << endl;
    }
    else{
        for(e = 2; e < (*Z); e++){
            if (__gcd(e, *Z) == 1){ //gcd maior divisor comum retorna 0 se M e N forem 0
              break;  //para, quando o valor de E seja um divisor comum de Z sendo primos entre si
            }
        }
    }

    return e;
}
///============================================================================================================
int calcule_d(int *E, int *Z){
    int d=0;

        for(d = (*E)+1; d<1200; d++){
            if((((*E)*d) % (*Z)) == 1){
                break;
            }
        }

    return d;
}
///============================================================================================================
//funçao pra retornar verdadeiro ou falso quando for primo ou nao
bool primo(int *x){
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
//testa de o que a função primo retornau é verdadeiro ou falso
bool teste_primo(int *P, int *Q){
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
    e = calcule_e(&z);
    d = calcule_d(&e, &z);

    cout << n << "\n" << z << "\n" << e << "\n"<< d << endl;

    ///chama função que substitui letra pela sua posição no alfabeto
    palavra_numerica(&n, &z, &e, &d, palavra, palavra_numerada, &tam_palavra);

    ///printar a palavra numerica
    for(int j=0; j<tam_palavra; j++){
        cout << "\t" << palavra_numerada[j];
    }

    ///função
    calculo_cifrar_decifrar(&e, &d, &n, palavra_numerada, &tam_palavra);



    return 0;
}
