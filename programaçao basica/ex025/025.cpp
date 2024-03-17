//Vestibular
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, acertos = 0;
    string gab, resp;
    cin >> num;
    cin >> gab >> resp;

    for (int i = 0; i < num; i++)
    {
        if (gab[i] == resp[i])
        {
            acertos += 1;
        }
        
    }
    
    cout << acertos << endl;
    return 0;
}
