//Lâmpadas
#include <iostream>

using namespace std;

int main () {
    int total, la = 0, lb = 0, vez;

    cin >> total;

    for (int i = 1; i <= total; i++)
    {
        cin >> vez;
        if (vez == 1)
        {
            la++;
            if (la == 2)
            {
                la = 0;
            }
            
        }
        else if (vez == 2)
        {
            if (la == lb)
            {
                if (la > 0)
                {
                    la = 0;
                    lb = 0;
                }
                else{
                    la = 1;
                    lb = 1;
                }
                
            }
            else{
                int sub = la;
                la = lb;
                lb = sub;
            }
            
        }
               
    }

    cout << la << endl << lb << endl;
    return 0;
    
}
