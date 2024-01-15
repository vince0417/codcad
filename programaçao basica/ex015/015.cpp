//Consecutivos
#include <iostream>

using namespace std;

int main () {
    int total, valor, anterior, soma, resposta;
    
    cin >> total >> valor;
    anterior = valor;
    soma = 1;
    resposta = 1;

    for (int i = 1; i < total; i++)
    {
        cin >> valor;
        if (valor != anterior)
        {
            if (resposta < soma)
            {
                resposta = soma;
            }
            soma = 0;
        }

        anterior = valor;
        soma++;
        
    }
    
    if (resposta < soma)
    {
        resposta = soma;
    }
    
    cout << resposta << endl;
    return 0;

}
