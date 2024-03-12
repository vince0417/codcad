//Overflow
#include <iostream>

using namespace std;

int main() {
    int max, n1, n2;
    char op;
    cin >> max >> n1 >> op >> n2;

    if (op == '+')
    {
        if (n1+n2 <= max)
        {
            cout << "OK" << endl;
        }
        else{
            cout << "OVERFLOW" << endl;
        } 
        
    }
    else{
        if (n1*n2 <= max)
        {
            cout << "OK" << endl;
        }
        else{
            cout << "OVERFLOW" << endl;
        }
        
    }
    
    return 0;
}
