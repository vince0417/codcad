//Prêmio do Milhão
#include <iostream>

using namespace std;

int main () {
    int total, cont = 0, acesso, soma = 0, resultado = 0;

    cin >> total;

    while (cont < total)
    {
        cin >> acesso;
        if (soma < 1000000)
        {
            resultado++;
        }
        soma = soma + acesso;
        cont ++;   
    }
    
    cout << resultado << endl;

    return 0;

}
