#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    string str;
    cin >> str;
    int l = str.length();
    if(str.substr(l-3) == "nta")
        cout << "yes";
    else
        cout << "no";
    return 0;
}