#include <iostream>
#include <vector>
using ll =long long;
using namespace std;
 
int main() {
    int t,n, m,ai, bi;
    ll ah, bh;
    bool at;
    cin >> t;
 
    while (t--) {
        ai = 0, bi = 0;
        cin >> n >> m;
 
        vector<ll> a(n), b(m);
 
        for (int i = 0; i < n; i++)cin >> a[i];
        for (int i = 0; i < m; i++)cin >> b[i];
 
        ah = a[0], bh = b[0];
        at = true;
 
        while (true) {
            if (at) {
                if (ah == 0 && ai == n - 1) {
                    cout << 2 << endl;
                    break;
                }
 
                if (ai < n - 1 && a[ai + 1] > ah) {
                    ai++;
                    ah = a[ai];
                }
            }
            else {
                if (bh == 0 && bi == m - 1) {
                    cout << 1 << endl;
                    break;
                }
 
                if (bi < m - 1 && b[bi + 1] > bh) {
                    bi++;
                    bh = b[bi];
                }
            }
 
            ll x, y;
 
            if (ai < n - 1) x = ah - a[ai + 1] + 1;
            else x = ah;
 
            if (bi < m - 1) y = bh - b[bi + 1] + 1;
            else y = bh;
 
            if (at) {
                if (y <= x) {
                    ah -= y - 1;
                    bh -= y;
                    at = false;
                }
                else {
                    ah -= x;
                    bh -= x;
                    at = true;
                }
            }
            else {
                if (x <= y) {
                    bh -= x - 1;
                    ah -= x;
                    at = true;
                }
                else {
                    bh -= y;
                    ah -= y;
                    at = false;
                }
            }
        }
    }
 
    return 0;
}