//Potências Simples
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double n1, n2;

    cin >> n1 >> n2;

    cout.precision(4);
    cout.setf(ios::fixed);
    cout << pow(n1, n2) << endl;

    return 0;
}
