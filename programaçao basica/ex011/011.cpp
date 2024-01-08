//Garçom
#include <iostream>

using namespace std;

int main () {
    int pedidos, quebrados = 0, latas, copos;

    cin >> pedidos;

    for (int  i = 0; i < pedidos; i++)
    {
        cin >> latas >> copos;
        if (latas > copos)
        {
            quebrados = quebrados + copos;
        }
        
    }

    cout << quebrados << endl;
    return 0;

}
