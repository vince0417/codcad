//Torre
#include <iostream>
using namespace std;

int main() {
    int num, l, c;
    cin >> num;

    int matriz[num][num];
    int vl[num], vc[num], soma[num*num];

    for (int i = 0; i < num; i++)
    {
        vl[i] = 0;
        vc[i] = 0;
    }
    
    for ( l = 0; l < num; l++)
    {
        for ( c = 0; c < num; c++)
        {
            cin >> matriz[l][c];
            vl[l] += matriz[l][c];
            vc[c] += matriz[l][c];
        }
        
    }
    
    int aux = 0, resultado = 0;
    for ( l = 0; l < num; l++)
    {
        for ( c = 0; c < num; c++)
        {
            soma[aux] = (vl[l]+vc[c])-(2*matriz[l][c]);
            if (soma[aux] > resultado)
            {
                resultado = soma[aux];
            }
            aux++;
        }
        
    }
    
    cout << resultado << endl;
    return 0;
}
