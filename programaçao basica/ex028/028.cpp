//Titulo
#include <bits/stdc++.h> 

using namespace std;

string title(string F){

    for (int i = 0; i < F.size(); i++)
    {
        if (i == 0)
        {   
            F[i] = (char) toupper(F[i]);   
        }
        else if (F[i-1] == ' ')
        {
            F[i] = (char) toupper(F[i]);
        }
        else{
            F[i] = (char) tolower(F[i]);
        }
        
    }

    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
    return 0;
}
