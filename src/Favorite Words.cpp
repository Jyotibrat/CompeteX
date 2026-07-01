#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string name;
    cin >> name;
    char f = name.front();
    char l = name.back();
    
    if(f == 'c' || f == 'C')
        cout << "yes" << endl;
    else if (l == 'f' || l == 'F')
        cout << "yes" << endl;
    else
        cout << "no"<< endl;
        
    return 0;
}
