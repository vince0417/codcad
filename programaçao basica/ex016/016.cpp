//Raízes
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    double total, num;

    cout.precision(4);
    cout.setf(ios::fixed);
    cin >> total;

    for (int i = 0; i < total; i++)
    {
        cin >> num;

        cout << sqrt(num) << endl;
    }
    
    return 0;
}
