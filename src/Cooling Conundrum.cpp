#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t, x, y, sec;
    cin >> t;
    while(t--){
        sec = 0;
        cin >> x >> y;
        while(x!=y){
            sec += static_cast<int>(ceil(x/10.0));
            x--;
        }
        cout << sec << endl;
    }
    
    return 0;
}
