//Código (OBI 2015)
#include <iostream>

using namespace std;

int main () {
    int x[10000], total, resultado = 0;

    cin >> total;

    for (int i = 0; i < total; i++)
    {
        cin >> x[i];

        if (x[i] == 0)
        {
            if (x[i-1] == 0 and x[i-2] == 1)
            {
                resultado = resultado + 1;
            }
            else
                continue;
            
        }
        
    }
    
    cout << resultado << endl;
    return 0;
}
