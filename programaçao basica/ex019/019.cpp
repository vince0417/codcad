//Campo Minado
#include <iostream>

using namespace std;

int main () {
    int total, campo[55];

    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> campo[i];
    }

    for (int i = 0; i < total; i++)
    {
        int quantidade = 0;

        quantidade = quantidade + campo[i];

        if (i < total-1)
        {
            quantidade = quantidade + campo[i+1];
        }
        

        if (i > 0)
        {
            quantidade = quantidade + campo[i-1];
        }

        cout << quantidade << endl;
        
    }
    
    return 0;
}
