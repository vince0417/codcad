//Quadrado Mágico
#include <iostream>

using namespace std;

int main() {
    int num, l, c;
    cin >> num;

    int matriz[num][num];
    int somad1 = 0, somad2 = 0;
    for ( l = 0; l < num; l++)
    {
        for ( c = 0; c < num; c++)
        {
            cin >> matriz[l][c];
        }
        
    }
    
    int aux = 0;
    for ( l = 0; l < num; l++)
    {
        int linha = 0;
        for ( c = 0; c < num; c++)
        {
            linha += matriz[l][c];
            if (l == c)
            {
                somad1 += matriz[l][c];
            }
            if (l+c == (num-1))
            {
                somad2 += matriz[l][c];
            }
        
        }
        if (aux == 0)
        {
            aux = linha;
        }
        if (linha != aux)
        {
            cout << "-1" << endl;
            return 0;
        }
        
    }

    if (somad1 != somad2 or somad1 != aux)
    {
        cout << "-1" << endl;
        return 0;
    }
    
    for ( c = 0; c < num; c++)
    {
        int coluna = 0;
        for ( l = 0; l < num; l++)
        {
            coluna += matriz[l][c];
        }
        
        if (coluna != somad2)
        {
            cout << "-1" << endl;
            return 0;
        }
          
    }
      
    cout << somad1 << endl;
    
    return 0;
}
