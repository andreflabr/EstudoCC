#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void calcule_n_z_e_d(int P, int Q){
    int n, z, e, d;

    n = P * Q;
    z = (P-1)*(Q-1);

    if(z <= 0){
        cout << "Erro: z <= 0!" << endl;
        return;
    }

    for(e = 2; e < z; e++){
        if (__gcd(e, z) == 1){ //gcd maior divisor comum retorna 0 se M e N forem 0
          break;  //para, quando o valor de E seja um divisor comum de Z sendo primos entre si
        }
    }

    for(int x = 0; x<1200; x++){
         = e*x*

    }
///continuar aqui --------------------------------------------------------------------------------------------------------


}

///=======================================================================
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
///=======================================================================
//testa de o que a função primo retornau é verdadeiro ou falso
bool teste_primo(int P, int Q){
    bool b_p, b_q;

    b_p = primo(P);
    b_q = primo(Q);

    if(b_p & b_q == true){
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
///=======================================================================
int main(){
    int p, q;
    bool primo_p_q = false;

    //usuario digitar os valores primos quando eles sao falsos
    while(primo_p_q != true){
        cout << "Digite valores primos para P e Q:" << endl;
        cin >> p >> q;

        primo_p_q = teste_primo(p, q);
    }

    calcule_n_z_e_d(p, q);

    return 0;
}
