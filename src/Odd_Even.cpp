#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t,n,o,e;
    cin >> t;
    while (t--) {
        cin >> n;
        o = 0, e = 0;

        for (auto i{-1}; ++i<n;) {
            int x;
            cin >> x;
            if (x % 2 == 0) e++;
            else o++;
        }

        cout << 2 * min(o, e) + (o != e) << endl;
    }
    return 0;
}