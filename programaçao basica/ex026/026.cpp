//Huaauhahhuahau 
#include <bits/stdc++.h>
using namespace std;

int main() {
    string riso, frente, verso;
    cin >> riso;

    for (int i = 0; i < riso.size(); i++)
    {
        if (riso[i] == 'a' or riso[i] == 'e' or riso[i] == 'i' or riso[i] == 'o' or riso[i] == 'u')
        {
            frente += riso[i]; 
        }
        
    }
    
    for (int i = riso.size()-1; i >= 0; i--)
    {
        if (riso[i] == 'a' or riso[i] == 'e' or riso[i] == 'i' or riso[i] == 'o' or riso[i] == 'u')
        {
            verso += riso[i]; 
        }
        
    }

    for (int i = 0; i < frente.size(); i++)
    {
        if (frente[i] == verso[i])
        {
            continue;
        }
        else{
            cout << "N\n";
            return 0;
        }
        
    }
    
    cout << "S\n";
    return 0;
}
