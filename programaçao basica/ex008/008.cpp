//Positivo, Negativo ou Nulo
#include <iostream>

using namespace std;

int main () {
    int num;

    cin >> num;

    if (num > 0)
    {
        cout << "positivo" << endl;
    }
    else if (num < 0)
    {
        cout << "negativo" << endl;
    }
    else
        cout << "nulo" << endl;

    return 0;
}
