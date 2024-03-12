//Operações
#include <iostream>

using namespace std;

int main() {
    char op;
    double n1, n2;
    cin >> op >> n1 >> n2;

    cout.precision(2);
    cout.setf(ios::fixed);
    if (op == 'M')
    {
        cout << n1*n2 << endl;
    }
    else{
        cout << n1/n2 << endl;
    }
    
    return 0;
}
