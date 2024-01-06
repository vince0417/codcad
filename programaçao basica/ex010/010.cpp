//Flíper
#include <iostream>

using namespace std;

int main () {
    int port1, port2;

    cin >> port1 >> port2;

    if (port1 == 1 and port2 == 1)
    {
        cout << "A" << endl;
    }
    else if (port1 == 1 and port2 == 0)
    {
        cout << "B" << endl;
    }
    else
        cout << "C" << endl;

    return 0;  
    
}
