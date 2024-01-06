//Aprovado ou Reprovado
#include <iostream>

using namespace std;

int main () {
    float n1, n2, m;

    cin >> n1 >> n2;
    m = (n1+n2)/2;

    if (m >= 7.00)
    {
        cout << "Aprovado" << endl;
    }
    else if (m >= 4.00)
    {
        cout << "Recuperacao" << endl;
    }
    else
        cout << "Reprovado" << endl;
    
    return 0;

}
