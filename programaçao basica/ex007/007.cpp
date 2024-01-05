//Par ou Ímpar
#include <iostream>

using namespace std;

int main () {
    int b, c, s;

    cin >> b >> c;
    s = b+c;

    if (s%2 == 0)
    {
        cout << "Bino" << endl;
    }
    else
        cout << "Cino" << endl;

    return 0;

}
