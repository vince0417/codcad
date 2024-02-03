//Fita Colorida
#include <iostream>

using namespace std;

int main () {
    int num, fita[10000], dir[10000], dist = 9;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> fita[i];
    }
    

    dist = 9;
    
    for (int i = (num-1); i >= 0; i--)
    {
        if (fita[i]  == 0)
        {
            dist = 0;
        }
        else if (dist < 9)
        {
            dist++;
        }

        dir[i] = dist;
    }
    
    for (int i = 0; i < num; i++)
    {
        if (fita[i]  == 0)
        {
            dist = 0;
        }
        else if (dist < 9)
        {
            dist++;
        }
        
        cout << min(dist, dir[i]) << " ";
    }

    cout << endl;
    return 0;
}
