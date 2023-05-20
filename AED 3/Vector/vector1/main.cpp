#include<bits/stdc++.h>
using namespace std;

int main(){
    int valor_inserido=0, i=12;
    vector<int>vec_impar, vec_par;
    vector<int>::iterator j;


    for(i=0; i<12 ; i++){
        cout << "\tDigite na posicao " << i << " o valor que sera separado em par ou impar:\t";
        cin >> valor_inserido;
        cout << endl;

        if( (vec_par.size() < 12) && (vec_impar.size() < 12) ){ //verifica se o vector ja esta cheio
            //par
            if(valor_inserido % 2 == 0){
                vec_par.push_back(valor_inserido);
            }
            //impar
            else{
                vec_impar.push_back(valor_inserido);
            }
        }
    }

    sort(vec_impar.begin(), vec_impar.end());
    sort(vec_par.begin(), vec_par.end());

    for(j = vec_par.begin(); j != vec_par.end(); ++j){
        printf("%d \teh par (%d)\n", *j, j);
    }
    for(j = vec_impar.begin(); j != vec_impar.end(); ++j){
        printf("%d \teh impar (%d)\n", *j, j);
    }

    return 0;
}
/*
valores teste
10
12
13
1
6
3
5
7
19
16
18
14

*/
