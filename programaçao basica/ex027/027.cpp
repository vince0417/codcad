//Contagem de Algarismos
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, qtd[] = {0,0,0,0,0,0,0,0,0,0};
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        string number;
        cin >> number;
        for (int i = 0; i < (int)number.size(); i++)
        {
            int pos = number[i] - '0';
            qtd[pos] += 1;
        }
    }
    

    for (int i = 0; i < 10; i++)
    {
        cout << i << " - " << qtd[i] << endl;
    }
        
    return 0;
}
