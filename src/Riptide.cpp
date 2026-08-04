#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t,a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a == b || b == c || a == c) {
            cout << 0 << endl;
            continue;
        }
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());
        cout << min(v[2] - v[1], v[1] - v[0]) << endl;
    }
    return 0;
}