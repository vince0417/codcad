//Bondinho
#include <iostream>

using namespace std;

int main () {
    int alunos, monitores, i;

    cin >> alunos >> monitores;
    i = alunos+monitores;

    if (i <= 50)
    {
        cout << "S" << endl;
    }
    else
        cout << "N" << endl;

    return 0;
    
}