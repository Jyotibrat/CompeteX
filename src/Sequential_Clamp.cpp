#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int y = 1000000000;

        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            if(y < a) y = a;
            if(y > b) y = b;
        }
        cout << y << endl;
    }
    return 0;
}