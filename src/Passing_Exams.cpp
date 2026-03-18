#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--){
        int x, y, z;
        cin >>x>>y>>z;
        int count = 0;

        if(x >= 50) 
            count++;
        if(y >= 50) 
            count++;
        if(z >= 50) 
            count++;

        if(count >= 2)
            cout << "yes" << endl;
        else
            cout << "No" << endl;   
    }
    return 0;
}