#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t, n, d;
    cin >> t;
 
    while (t--) {
        cin >> n;
 
        vector<int> edges;
        vector<vector<int>> children(n + 1);
        vector<bool> DD(n + 1, false), CF(n + 1, false);
 
        for (auto i{1}; ++i <= n;) {
            int p;
            cin >> p;
            children[p].push_back(i);
        }
 
        cin >> d;
 
        for (auto i{-1}; ++i < d;) {
            int x;
            cin >> x;
            DD[x] = true;
        }
 
        for (auto i{n + 1}; --i >= 1;) {
            vector<int> childC;
            for (auto c : children[i]) {
                if (CF[c])childC.push_back(c);
            }
 
            if (DD[i]) {
                for (auto c : childC)edges.push_back(c);
 
                CF[i] = true;
            }
            else {
                if (childC.empty()) {
                    CF[i] = false;
                }
                else {
                    for (auto j{0uz}; j + 1 < childC.size(); ++j)edges.push_back(childC[j]);
 
                    CF[i] = true;
                }
            }
        }
 
        cout << edges.size();
 
        for (auto x : edges)cout << " " << x;
 
        cout << endl;
    }
 
    return 0;
}